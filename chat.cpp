/*
  GROOVY WORK DRUMS — Strudel
  Paste into https://strudel.cc

  Banks used:
  - ViscoSpaceDrum
  - RolandTR909
  - claps

  Tip:
  Comment/uncomment any stack(...) block to switch grooves.
*/

/* =======================================================
   GROOVE 1 — Laid-back pocket (70 BPM)
   ======================================================= */

setcpm(70 / 4);

const g1_kick = s("bd - bd - bd - - bd - - bd - - - - bd -").bank("ViscoSpaceDrum");

const g1_snare = s("- - sd - - - sd -").bank("RolandTR909").gain(0.9);

const g1_hh = s("hh hh hh hh hh hh hh hh").mask("<1 0 1 0 1 0 1 0>").bank("RolandTR909").gain(0.6);

// stack(g1_kick, g1_snare, g1_hh);

/* =======================================================
   GROOVE 2 — Mid-tempo workbeat (100 BPM)
   ======================================================= */

setcpm(100 / 4);

const g2_main = s("bd*2 sd lt -  bd lt bd [lt lt] - lt [lt lt] lt [lt lt]").bank("ViscoSpaceDrum");

const g2_clap = s("- - cp -  - cp - -").bank("claps").gain(0.8);

// stack(g2_main, g2_clap);

/* =======================================================
   GROOVE 3 — Triplet / swung pocket
   ======================================================= */

setcpm(120 / 4);

const g3_kick = s("bd - [bd bd] - bd - [bd bd] -").bank("RolandTR909");

const g3_sn = s("- sd - - sd - - sd -").bank("ViscoSpaceDrum");

const g3_hh = s("hh:1 hh:1 hh:1").mask("<1 0 1 1 0 1 0 1>").bank("RolandTR909").gain(0.6);

stack(g3_kick, g3_sn, g3_hh);

/* =======================================================
   GROOVE 4 — Shuffled hats + ghost kicks
   ======================================================= */

setcpm(110 / 4);

const g4_main = s("bd - bd - bd - bd -").bank("ViscoSpaceDrum");

const g4_ghost = s("- [bd:0.4 bd:0.4] - - [bd:0.4 bd:0.4] -").bank("RolandTR909").gain(0.35);

const g4_hats = s("hh hh:0.9 - hh hh - hh:0.9 -").mask("<1 1 0 1 1 0 1 1>").bank("RolandTR909").lpf(800).gain(0.6);

// stack(g4_main, g4_ghost, g4_hats);

/* =======================================================
   GROOVE 5 — Breakbeat-ish pocket
   ======================================================= */

setcpm(95 / 4);

const g5_a = s("<bd bd sd lt - bd lt bd [lt cp] - lt - [cp lt] - cp cp>").bank("ViscoSpaceDrum");

const g5_b = s("cp cp - cp - cp - cp -").bank("claps").gain(0.9);

// stack(g5_a, g5_b);

/* =======================================================
   GROOVE 6 — Minimal techno (125 BPM)
   ======================================================= */

setcpm(125 / 4);

const g6_bd = s("bd*4").bank("RolandTR909").gain(1.1);

const g6_perc = s("- hh - hh - lt hh -").bank("ViscoSpaceDrum").lpf(1200).gain(0.6);

const g6_fx = s("- - cp - - - cp -").bank("claps").gain(0.3);

// stack(g6_bd, g6_perc, g6_fx);

/* =======================================================
   HOW TO USE
   =======================================================

   1. Uncomment ONE stack(...) block at a time
   2. Adjust setcpm(...) above that groove
   3. Tweak gain(), lpf(), or patterns live
   4. Let it run while you work 🔁

*/

