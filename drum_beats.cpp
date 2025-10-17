/*
   strudel.cc

   making music with just the base drum set to play for myself in the background

   RolandTR909, ViscoSpaceDrum
   viscospacedrum_bd(1)
*/

sound("<bd bd sd lt bd lt bd lt lt lt lt bd bd sd>*10").bank("ViscoSpaceDrum")
sound("<bd bd sd lt - bd lt bd lt lt lt - lt bd bd sd>*10").bank("ViscoSpaceDrum")
sound("<bd bd sd lt - bd lt bd [lt lt] - lt - [lt lt] - cp - [bd bd] - cp - bd sd>*10").bank("ViscoSpaceDrum")
sound("<bd bd sd lt - bd lt bd [lt lt] - lt - [lt lt] - cp - [bd bd] - cp - bd sd>*10").bank("RolandTR909")
sound("<bd bd sd lt - bd lt bd [lt cp] - lt - [cp lt] - cp - cp - cp - [cp cp] - [cp bd] - cp - bd sd>*10").bank("RolandTR909")
sound("<bd bd sd lt - bd lt bd [lt cp] - lt - [cp lt] - cp - cp - cp - [cp cp] - [cp bd] - cp - bd sd>*10").bank("RolandTR909")

sound("<bd bd sd lt - bd lt bd [lt cp] - lt - [cp lt] - cp - cp - cp - [cp cp] - [cp bd] - cp - bd sd>*10").bank("RolandTR909")
sound("<bd bd sd lt - bd lt bd [lt cp] - lt - [cp lt] - cp - cp - cp - [cp cp] - [cp bd] - cp - bd sd>*10").bank("<ViscoSpaceDrum RolandTR909>")

sound(`
       <bd bd sd lt -  bd lt bd [lt lt] - lt - [lt lt] - lt - lt - lt - [lt lt] - [lt bd] - lt - bd sd>*10,
       <cp  cp  cp  cp  cp  cp  cp  cp  cp       cp cp>*10
      `).bank("<ViscoSpaceDrum, RolandTR909>")

sound(
        "cp*2 cp*2 cp*2",
        "bd bd bd".bank("ViscoSpaceDrum")
    )

sound(`
       <bd bd sd lt -  bd lt bd [lt lt] - lt [lt lt] lt [lt lt]>*10,
       <cp cp cp cp -  cp cp cp cp      - cp cp      cp cp     >*10
      `).bank("<ViscoSpaceDrum, RolandTR909>")

setcpm(60/4)
s(`
   bd bd sd lt -  bd lt bd [lt lt] - lt [lt lt] lt [lt lt],
   cp cp cp cp -  cp cp cp cp      - cp cp      cp cp     
  `).bank("<ViscoSpaceDrum RolandTR909>")


setcpm(60/4)
const a = s("bd*2 sd lt -  bd lt bd [lt*2] - lt [lt*2] lt [lt*2]").bank("ViscoSpaceDrum");
const b = s("-    cp -  -  -  -  cp -      - cp        cp -     ").bank("RolandTR707");
stack(b, a);

setcpm(60/4)
const a = s("bd*2 sd rim*2 lt -  bd rim bd lt*2 - lt lt*2 sd [lt*2]").bank("ViscoSpaceDrum");
stack(a);

setcpm(100/4)
const a = s("mt*2 - sd mt - mt*2 sd").bank("ViscoSpaceDrum");
stack(a);
