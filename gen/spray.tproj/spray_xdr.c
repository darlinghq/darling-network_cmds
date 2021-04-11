/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "spray.h"
#ifndef lint
/*static char sccsid[] = "from: @(#)spray.x 1.2 87/09/18 Copyr 1987 Sun Micro";*/
/*static char sccsid[] = "from: @(#)spray.x	2.1 88/08/01 4.0 RPCSRC";*/
#endif /* not lint */
#include <sys/cdefs.h>
__RCSID("$FreeBSD: src/include/rpcsvc/spray.x,v 1.7 2003/05/04 02:51:42 obrien Exp $");

bool_t
xdr_spraytimeval(xdrs, objp)
	XDR *xdrs;
	spraytimeval *objp;
{

	if (!xdr_u_int(xdrs, &objp->sec))
		return (FALSE);
	if (!xdr_u_int(xdrs, &objp->usec))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_spraycumul(xdrs, objp)
	XDR *xdrs;
	spraycumul *objp;
{

	if (!xdr_u_int(xdrs, &objp->counter))
		return (FALSE);
	if (!xdr_spraytimeval(xdrs, &objp->clock))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_sprayarr(xdrs, objp)
	XDR *xdrs;
	sprayarr *objp;
{

	if (!xdr_bytes(xdrs, (char **)&objp->sprayarr_val, (u_int *)&objp->sprayarr_len, SPRAYMAX))
		return (FALSE);
	return (TRUE);
}