/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#ifndef	_S1ap_E_RABItem_H_
#define	_S1ap_E_RABItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-E-RAB-ID.h"
#include "S1ap-Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_IE_Extensions;

/* S1ap-E-RABItem */
typedef struct S1ap_E_RABItem {
	S1ap_E_RAB_ID_t	 e_RAB_ID;
	S1ap_Cause_t	 cause;
	struct S1ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_E_RABItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-IE-Extensions.h"

#endif	/* _S1ap_E_RABItem_H_ */
#include <asn_internal.h>
