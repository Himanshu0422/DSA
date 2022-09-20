// $("button").click(function(){
//     $("h1").css("color", "purple");
// });

// $("input").keypress(function(event){
//     $("h1").text(event.key);
// }); 


$(".five").on("click", function(){
    $("h1").css("color", "purple");
});

// $(".five").on("click" ,function(){
//     $("h1").hide();
// });

$(".four").on("click" ,function(){
    $("h1").toggle();
}); 

$(".three").on("click" ,function(){
    $("h1").fadeToggle();
});

$(".two").on("click" ,function(){
    $("h1").slideToggle();
});  

// $("button").on("click" ,function(){
//     $("h1").animate({opacity: 0.5}); //in animate only numberic css is used
// }); 


$(".one").on("click" ,function(){
    $("h1").slideUp().slideDown().animate({opacity: 0.5});
});