// S2LET package
// Copyright (C) 2012
// Boris Leistedt & Jason McEwen

#ifndef S2LET_TILING
#define S2LET_TILING

#define PI    3.141592653589793238462643383279502884197

void s2let_switch_wavtype(int typenum);

int s2let_bandlimit(int j, int J_min, int B, int L);

int s2let_el_min(int B, int J_min);

int s2let_j_max(int L, int B);

void s2let_tiling_axisym_allocate(double **kappa, double **kappa0, int B, int L);

void s2let_tiling_axisym(double *kappa, double *kappa0, int B, int L, int J_min);

/*!
 * Generates smooth functions to construct the tiling.
 *
 * \param[out]  phi2 Smooth step functions for the wavelets.
 * \param[in]  B Wavelet parameter.
 * \param[in]  L Angular harmonic band-limit.
 * \param[in]  J_min First wavelet scale to be used.
 * \retval none
 */
void s2let_tiling_phi2(double *phi2, int B, int L, int J_min);

double s2let_tiling_axisym_check_identity(double *kappa, double *kappa0, int B, int L, int J_min);

#endif
