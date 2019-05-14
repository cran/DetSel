/* Generated using tools::package_native_routine_registration_skeleton("DetSel")
   see: https://stackoverflow.com/questions/42313373/r-cmd-check-note-found-no-calls-to-r-registerroutines-r-usedynamicsymbols
*/
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
 Check these declarations against the C/Fortran source code.
 */

/* .C calls */
extern void GetData();
extern void SimulDiv(void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"GetData",  (DL_FUNC) &GetData,  0},
    {"SimulDiv", (DL_FUNC) &SimulDiv, 4},
    {NULL, NULL, 0}
};

void R_init_DetSel(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

