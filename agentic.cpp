/*
  AGENTIC DRUM BEAT — Strudel
  Simple fast default-kit groove.
*/

setcpm(120 / 4);

const kick = s(`
  <
    bd ~ bd ~ bd ~ [bd bd] ~
    bd ~ bd ~ bd ~ ~ bd
    bd ~ ~ bd bd ~ [bd ~] ~
    bd ~ bd ~ bd [bd bd] ~ ~
  >
`);

const snare = s(`
  <
    ~ ~ sd ~ ~ ~ sd ~
    ~ ~ sd ~ ~ ~ sd ~
    ~ ~ sd ~ ~ [sd ~] sd ~
    ~ ~ sd ~ ~ ~ [sd sd] ~
  >
`).gain(0.8);

const hats = s(`
  <
    hh*8
    hh*8
    hh hh [hh hh] hh hh hh hh
    hh hh hh [hh hh] hh hh oh
  >
`).gain(0.5);

const openHat = s("~ ~ ~ oh ~ ~ ~ oh").gain(0.22);
const clap = s("~ ~ cp ~ ~ ~ cp ~").gain(0.18);
const rim = s("~ rim ~ ~ ~ rim ~ rim").gain(0.16);
const toms = s("~ ~ mt ~ ~ lt ht ~").gain(0.2);

$: kick
$: snare
$: hats
$: openHat
$: clap
$: rim
$: toms
