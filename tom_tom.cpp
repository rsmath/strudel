/*
  TOM TOM — Strudel
  Original tom-driven groove inspired by propulsive layered percussion.

  Keep `$:` on the parts you want active at the bottom.
  Change a part to `_$:` if you want to mute it.
*/

setcpm(126 / 4);

const kick = s(`
  <
    bd ~ ~ ~ bd ~ ~ ~
    bd ~ ~ ~ bd ~ bd ~
    bd ~ ~ ~ bd ~ ~ ~
    bd ~ bd ~ bd ~ ~ ~
  >
`).gain(0.92)

const snare = s(`
  <
    ~ ~ sd ~ ~ ~ sd ~
    ~ ~ sd ~ ~ ~ sd ~
    ~ ~ sd ~ ~ ~ sd ~
    ~ ~ sd ~ [sd ~] sd ~
  >
`).gain(0.62)

const hats = s(`
  <
    hh*16
    [hh hh hh oh]*4
    hh*16
    [hh oh hh hh]*4
  >
`).gain(0.58)

const tomMain = s(`
  <
    mt ~ mt ht mt ~ lt ~
    mt ~ mt ht mt ~ lt ht
    mt ~ mt ht mt ~ lt ~
    mt [mt ht] mt ht mt ~ lt ht
  >
`).gain(0.72)

const tomLow = s(`
  <
    ~ lt ~ ~ lt ~ ~ ~
    ~ lt ~ ~ lt ~ mt ~
    ~ lt ~ ~ lt ~ ~ ~
    ~ lt ~ mt lt ~ ~ ~
  >
`).gain(0.42)

const rim = s(`
  <
    ~ rim ~ ~ rim ~ ~ rim
    ~ rim ~ ~ rim ~ rim ~
    ~ rim ~ ~ rim ~ ~ rim
    ~ rim [rim ~] ~ rim ~ ~ ~
  >
`).gain(0.24)

const ride = s(`
  <
    ~ ~ rd ~ rd ~ rd ~
    ~ ~ rd ~ rd ~ rd rd
    ~ ~ rd ~ rd ~ rd ~
    ~ ~ rd rd ~ rd ~ rd
  >
`).gain(0.2)

const bass = note(`
  <
    a1 ~ a1 ~ a2 ~ a1 ~
    g1 ~ g1 ~ g2 ~ g1 ~
    d2 ~ d2 ~ a1 ~ d2 ~
    e2 ~ e2 ~ b1 ~ e2 ~
  >
`)
  .sound("gm_electric_bass_finger")
  .gain(0.4)
  .lpf(1050)

const backing = note(`
  <
    [a3 e4] ~ [a3 e4] ~
    [g3 d4] ~ [g3 d4] ~
    [d3 a3] ~ [d3 a3] ~
    [e3 b3] ~ [e3 b3] ~
  >
`)
  .sound("gm_synth_strings_1")
  .gain(0.08)
  .lpf(1800)
  .room(0.22)

const stab = note(`
  <
    ~ a4 ~ c5 ~ a4 ~ ~
    ~ g4 ~ b4 ~ g4 ~ ~
    ~ d4 ~ a4 ~ d5 ~ ~
    ~ e4 ~ b4 ~ e5 ~ ~
  >
`)
  .sound("gm_trumpet")
  .gain(0.1)
  .room(0.14)
  .lpf(2000)

$: kick
$: snare
$: hats
$: tomMain
$: tomLow
$: rim
$: ride
$: bass
$: backing
_$: stab
