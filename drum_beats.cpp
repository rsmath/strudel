/*
   strudel.cc

   making music with just the base drum set to play for myself in the background

   RolandTR909, ViscoSpaceDrum
   viscospacedrum_bd(1)
   
   claps
   bossdr110
   bossdr550
   alesishr16
   alesissr16
   casiorz1
   circuitsdrumtracks
   cp(2)
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
const b = s("cp:1 -");
/* const c = s("cp").bank("casiorz1"); */
const c = s("cp").gain(0.5).bank("claps");
stack(a, c);

setcpm(120/4)
const a = s("bd mt*2 - [hh oh]").bank("ViscoSpaceDrum, RolandTR909");
const b = s("- - cp:1 -");
stack(a, b)._punchcard();

setcpm(120/4)
const a = s("[bd*2 -] mt*2 - [hh oh]").bank("ViscoSpaceDrum, RolandTR909");
const b = s("- - cp:1 -");
stack(a, b)._punchcard({cycles: 4, labels: 1});

$: note("<[c2 c3]*4 [bb1 bb2]*4 [f2 f3]*4 [eb2 eb3]*4>")
.sound("gm_synth_bass_1").lpf(800)
$: n(`<
[~ 0] 2 [0 2] [~ 2]
[~ 0] 1 [0 1] [~ 1]
[~ 0] 3 [0 3] [~ 3]
[~ 0] 2 [0 2] [~ 2]
>*4`).scale("C4:minor")
.sound("gm_synth_strings_1")
$: sound("bd*4, [~ <sd cp>]*2, [~ hh]*4")
.bank("RolandTR909")

/*

gm_electric_bass_finger(1)
gm_synth_bass_1
gm_fretless_bass_2

*/
// lets make a badass beat
setcpm(120/4)

$: note("<[c2 c3]*4 [bb1 bb2]*4 [f2 f3]*4 [eb2 eb3]*4>")
.sound("<gm_electric_bass_finger gm_synth_bass_1>").lpf(rand.range(1000, 1600))

_$: n(`<
[~ 0] 2 [0 2] [~ 2]
[~ 0] 1 [0 1] [~ 1]
[~ 0] 3 [0 3] [~ 3]
[~ 0] 2 [0 2] [~ 2]
>*4`).scale("C4:minor")
.sound("gm_synth_strings_1")

_$: sound("bd*4, [~ <sd cp>]*2, [~ hh]*4")
.bank("RolandTR909")

