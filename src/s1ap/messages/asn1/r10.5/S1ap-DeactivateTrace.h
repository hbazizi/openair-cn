/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU"
 * 	found in "S1AP-PDU.asn"
 */

#ifndef	_S1ap_DeactivateTrace_H_
#define	_S1ap_DeactivateTrace_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_IE;

/* S1ap-DeactivateTrace */
typedef struct S1ap_DeactivateTrace {
	struct s1ap_DeactivateTrace_ies {
		A_SEQUENCE_OF(struct S1ap_IE) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} s1ap_DeactivateTrace_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_DeactivateTrace_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_DeactivateTrace;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-IE.h"

#endif	/* _S1ap_DeactivateTrace_H_ */
#include <asn_internal.h>
