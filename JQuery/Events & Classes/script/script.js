/* index-1 */

$(".main").click(function () {
    $(".wel-msg").text("Toh kese he aap log !!");
});

/* index-2 */

$(".t-1").click(function () {
    $(".t-1").css("background-color", "#FDFFC2")
})
$(".t-2").click(function () {
    $(".t-2").css("background-color", "#94FFD8")
})
$(".t-3").click(function () {
    $(".t-3").css("background-color", "#A3D8FF")
})

/* index-3 */

$(".main").click(function () {
    $(".text").toggleClass("font");
});

/* index-4 */

$(".text").click(function () {
    $(".text").toggleClass("font");
});

/* index-5 */

$(".Btn1").dblclick(function () {
    $(".paragraph").hide()
})
$(".Btn2").dblclick(function () {
    $(".paragraph").show()
})
