$(".menu").click (function () {
    $(".sidebar").toggle();
    $(".header").toggleClass("newHeader");
    $(".main").toggleClass("mainNew");


 })

// first chart

var ctx = document.getElementById("barChart").getContext('2d');
var barChart = new Chart(ctx, {
  type: 'bar',
  data: {
    labels: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sst", "Sun"],
    datasets: [{
      label: 'data-1',
      data: [12, 19, 3, 17, 28, 24, 7],
      backgroundColor: "rgba(255,0,0,1)"
    }, {
      label: 'data-2',
      data: [30, 29, 5, 5, 20, 3, 10],
      backgroundColor: "rgba(0,0,255,1)"
    }]
  }
});

// second chart

const wrap = d3.select('#chart-wrap');
let wrapWidth = parseInt(wrap.style('width'));
let wrapHeight;
const src = 'https://assets.codepen.io/1329727/data-demo.csv';
const colorsArray = ['#5626C4', '#E60576', '#2CCCC3', '#FACD3D', '#FF5100', '#181818', ];
const formatPerc = d3.format('.0%');
let width;
let height;
let total;
let pieRadius;
let pie;
let arc;

// Tooltip functions
const tooltipMouseMove = (d) => {
    const xArc = arc.centroid(d)[0] + (width / 3);
    const yArc = arc.centroid(d)[1] + (height / 3);
    
    tooltipChart
      .html(() => {
        return (
          `<div class="chart-tooltip-wrap">
            <p>Percentage: ${formatPerc(d.value / total)}</p>
            <p>Value: ${d.value}</p>
           </div>
          `
         );
      })
      .style('visibility', 'visible')
      .style('top', 0)
      .style('left', 0)
      .style("transform", `translate(${xArc + 200}px, ${yArc + 50}px)`);
}

const tooltipMouseOut = () => {
  tooltipChart
    .style('visibility', 'hidden')
}

// Pie
if (wrapWidth <= 479) {
  width = 250;
  height = 250;
} else {
  width = 300;
  height = 300;
}

pieRadius = Math.min(width / 2, height / 2);

pie = d3.pie()
  .value((d) => { return d.value; })
  .padAngle(0.03);

arc = d3.arc()
  .outerRadius(pieRadius)
  .innerRadius(pieRadius / 2);

// Animation function
const animate = (f) => {
  f.innerRadius = 0;
  let interp = d3.interpolate({ startAngle: 0, endAngle: 0 }, f);

  return (t) => { return arc(interp(t)); }
}

// SVG
const svg = wrap.append('svg')
  .attr('width', width)
  .attr('height', height);

// SVG aria tags
svg.append('title')
  .attr('id','chart-title')
  .html('Donut chart');

svg.append('desc')
  .attr('id','chart-desc')
  .html('Displays arbitrary values for items.');

svg.attr('aria-labelledby','chart-title chart-desc');

tooltipChart = wrap.append('div')
    .attr('class','chart-tooltip')
    .style('visibility', 'hidden');

const g = svg.append('g')
  .attr('width', width)
  .attr('height', height)
  .attr('class','group')
  .style('transform', `translate(${width / 2}px, ${height / 2}px)`);

// Create chart
async function createDonut() {
  const data = await d3.csv(src); 
  // Descending data
  data.sort((a, b) => {
    return d3.descending(+a.value, +b.value);
  });
  total = d3.sum(data, (d) => { return d.value; });
  
  // Pie slices
  const slices = g.selectAll('.arc')
    .data(pie(data))
    .enter()
    .append('path')
    .attr('class', 'slices')
    .attr('fill', (d,i) => { return colorsArray[i]; })
    .on('mouseover', (event, d) => {
      const f = d;
      tooltipMouseMove(f);
    })
    .on('mouseout', () => {
      tooltipMouseOut();
    })
    .transition()
    .duration(1000)
    .delay(100)
    .attrTween('d', animate);
    
  // Text values in slices
  const text = g.selectAll('.text')
    .data(pie(data))
    .enter()
    .append('text')
    .attr('transform', (d) => { return `translate(${arc.centroid(d)})`; })
    .attr('class', 'text')
    .style('opacity', '0')
    .text((d,i) => { return formatPerc(d.value / total) })
    .transition()
    .duration(300)
    .delay(700)
    .style('opacity', '1');
  
  // Legend
  const createLegend = (parent, data, cat, color) => {
      parent.append('div')
        .attr('class', 'legend')
        .selectAll('div')
        .data(data)
        .enter()
        .append('div')
        .attr('class', 'legend-group')
        .html((d, i) => {
          return(`
            <div class="legend-box" style="background-color: ${color[i]};"></div>
            <p class="legend-label">${d[cat]}</p>
          `);
        });
      }
  createLegend(wrap, data, 'name', colorsArray);
}
createDonut();

const resize = () => {
    let wrapWidth = parseInt(wrap.style('width'));
    if (wrapWidth <= 479) {
      width = 250;
      height = 250;
    } else {
      width = 300;
      height = 300;
    }
  
    svg.attr('width', width)
      .attr('height', height);

    g.attr('width', width)
      .attr('height', height)
      .style('transform', `translate(${width / 2}px, ${height / 2}px)`);
  
    pieRadius = Math.min(width / 2, height / 2);

    arc = d3.arc()
      .outerRadius(pieRadius)
      .innerRadius(pieRadius / 2);
  
    d3.selectAll('.slices')
      .attr('d', arc)
      .on('mouseover', (event, d) => {
        const f = d;
        tooltipMouseMove(f);
      })
      .on('mouseout', () => {
        tooltipMouseOut();
      });
  
    d3.selectAll('.text')
      .attr('transform', (d) => { return `translate(${arc.centroid(d)})`; })
}

d3.select(window).on('resize', resize);


// celender js

var dragging = false;
var days = document.querySelectorAll('.day');
var offset = 0;

function activateDay() {
  var activeElement = document.activeElement;
  var activeAItem = document.querySelector('.active-a');
  var activeBItem = document.querySelector('.active-b');
  
  if (activeAItem && activeBItem) {
    clearActiveDays();
    clearRange();
    activeElement.classList.add('active-a');
    return;
  }
  
  if (activeAItem) activeElement.classList.add('active-b');
  else activeElement.classList.add('active-a');
}

function clearActiveDays() {
  var activeAItem = document.querySelector('.active-a');
  var activeBItem = document.querySelector('.active-b');
  
  if (activeAItem) activeAItem.classList.remove('active-a');
  if (activeBItem) activeBItem.classList.remove('active-b');
}

function clearRange() {
  days.forEach(item => {
    item.classList.remove('range');
  });
}

function calculateRange() {
  var activeAIndex, activeBIndex;

  days.forEach((item, index) => {
    if (item.classList.contains('active-a')) activeAIndex = index;
    if (item.classList.contains('active-b')) activeBIndex = index;
  });

  if (activeAIndex < activeBIndex) {
    for (var i = activeAIndex; i <= activeBIndex; i++) {
      days[i].classList.add('range');
    }
  }

  if (activeAIndex > activeBIndex) {
    for (var i = activeAIndex; i >= activeBIndex; i--) {
      days[i].classList.add('range');
    }
  }
}

function startMove(item) {
  dragging = true;
  
  var activeAItem = document.querySelector('.active-a');
  var activeBItem = document.querySelector('.active-b');
  
  if (!activeBItem && activeAItem) {
    item.classList.add('active-b');
    calculateRange();
  } else {
    clearActiveDays();
    clearRange();
    item.classList.add('active-a');
  }
}

function move(item) {
  if (dragging) {
    var activeA = document.querySelector('.active-a');
    var prevActiveB = document.querySelector('.active-b');

    clearRange();

    if (prevActiveB) prevActiveB.classList.remove('active-b');
    if (!item.classList.contains('active-a')) item.classList.add('active-b');

    var activeB = document.querySelector('.active-b');

    calculateRange();
  }
}

function endMove(item) {
  dragging = false;
}

window.addEventListener('mouseup', e => {
  dragging = false;
});

days.forEach((item, index) => {
  var dayNumber = item.querySelector('.day-number').innerHTML;
  
  if (dayNumber === '1' && !item.classList.contains('next-mon')) {
    offset = index;
  }
  
  item.addEventListener('mousedown', e => {
    startMove(item);
  });
  
  item.addEventListener('mousemove', e => {
    move(item);
  });
  
  item.addEventListener('mouseup', e => {
    endMove(item);
  });
});

window.addEventListener('keyup', e => {
  var key = e.keyCode;
  
  switch (key) {
    case 13:
      activateDay();
      calculateRange();
      break;
  }
});

document.querySelector('.reset').addEventListener('click', e => {
  clearActiveDays();
  clearRange();
});