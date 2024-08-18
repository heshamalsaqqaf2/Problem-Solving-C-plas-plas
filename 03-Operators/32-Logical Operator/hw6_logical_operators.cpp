/*
    Homework [6] : Create your own Logic!.
    - Code By: Hesham Z. Alsaqqaf

// T && T && F && T
// - F        [as all of them are && and one of them is F]
// ========================================================================

// T && T && F && T || T && T
// - T && T && F && T ==> Reduce to F
// - F || T ==> T
// ========================================================================

// T && T && T && T || T && (T || F)
// - (T || F) ==> Reduce to T
// - T && T && T && T || T && T
// - T && T && T && T ==> reduce to T
// - T || T && T
// - T && T  ==> Reduce to T
// - T || T ==> T
// ========================================================================

// T && T && T || T && (F || (T && (T && T)))
// - (T && T) ==> reduce to T
// - T && T && T || T && (F || (T && T))
// - (T && T) ==> reduce to T
// - T && T && T || T && (F || T)
// - (F || T) ==> reduce to T
// - T && T && T || T && T
// - T && T && T  ==> reduce to T
// - T || T && T
// - T && T ==> reduce to T
// - T || T ==> T
// ========================================================================

// T && T || T && F && T || T && T && F || (T && (T || F))
// - (T || F) ==> reduce to T
// - T && T || T && F && T || T && T && F || (T && T)
// - (T && T) ==> reduce to T
// - T && T || T && F && T || T && T && F || T
// - T && T ==> reduce to T
// - T || T && F && T || T && T && F || T
// - T && F && T ==> Reduce to F
// - T || F || T && T && F || T
// - T && F && T ==> Reduce to F
// - T || F || T && T && F || T
// - T && T && F ==> Reduce to F
// - T || F || F || T ==> T
// ========================================================================

// T && T || T && F && T || T && T && F || (T && (T || F))
// - (T || F) ==> reduce to T
// - T && T || T && F && T || T && T && F || (T && T)
// - (T && T) ==> reduce to T
// - T && T || T && F && T || T && T && F || T
// - (T && T) ==> reduce to T
// - T || whatever = T     [smart reduction]
// ========================================================================

// T && T || T && F && T || (T && T && F || (T && (T || F)))
// - Notice T && T || something = T, so we know the answer T
// ========================================================================

// (T && T || T && F && T || T) && T && F || (T && (T || F))
// - (T && (T || F)) ==> reduced in 2 steps to: T
// - (T && T || T && F && T || T) ==> (T || F || T) ==> T
// - So now is:
// - T && T && F || T ==> F || T ==> T
// ========================================================================

// T && T || T && (F && T || T && T) && F || (T && (T || F))
// - (T && (T || F)) ==> reduced in 2 steps to: T
// - (F && T || T && T) ==> (F || T) ==> T
// - T && T || T && T && F || T ==> T || F || T = T

*/