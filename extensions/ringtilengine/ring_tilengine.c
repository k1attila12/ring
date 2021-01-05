#include "ring.h"

/* Copyright (c) 2021 Mahmoud Fayed <msfclipper@yahoo.com> */

#include <tilengine.h>
RING_FUNC(ring_get_tilengine_ver_maj)
{
	RING_API_RETNUMBER(TILENGINE_VER_MAJ);
}

RING_FUNC(ring_get_tilengine_ver_min)
{
	RING_API_RETNUMBER(TILENGINE_VER_MIN);
}

RING_FUNC(ring_get_tilengine_ver_rev)
{
	RING_API_RETNUMBER(TILENGINE_VER_REV);
}

RING_FUNC(ring_get_tilengine_header_version)
{
	RING_API_RETNUMBER(TILENGINE_HEADER_VERSION);
}

RING_FUNC(ring_get_flag_none)
{
	RING_API_RETNUMBER(FLAG_NONE);
}

RING_FUNC(ring_get_flag_flipx)
{
	RING_API_RETNUMBER(FLAG_FLIPX);
}

RING_FUNC(ring_get_flag_flipy)
{
	RING_API_RETNUMBER(FLAG_FLIPY);
}

RING_FUNC(ring_get_flag_rotate)
{
	RING_API_RETNUMBER(FLAG_ROTATE);
}

RING_FUNC(ring_get_flag_priority)
{
	RING_API_RETNUMBER(FLAG_PRIORITY);
}

RING_FUNC(ring_get_flag_masked)
{
	RING_API_RETNUMBER(FLAG_MASKED);
}

RING_FUNC(ring_get_blend_none)
{
	RING_API_RETNUMBER(BLEND_NONE);
}

RING_FUNC(ring_get_blend_mix25)
{
	RING_API_RETNUMBER(BLEND_MIX25);
}

RING_FUNC(ring_get_blend_mix50)
{
	RING_API_RETNUMBER(BLEND_MIX50);
}

RING_FUNC(ring_get_blend_mix75)
{
	RING_API_RETNUMBER(BLEND_MIX75);
}

RING_FUNC(ring_get_blend_add)
{
	RING_API_RETNUMBER(BLEND_ADD);
}

RING_FUNC(ring_get_blend_sub)
{
	RING_API_RETNUMBER(BLEND_SUB);
}

RING_FUNC(ring_get_blend_mod)
{
	RING_API_RETNUMBER(BLEND_MOD);
}

RING_FUNC(ring_get_blend_custom)
{
	RING_API_RETNUMBER(BLEND_CUSTOM);
}

RING_FUNC(ring_get_max_blend)
{
	RING_API_RETNUMBER(MAX_BLEND);
}

RING_FUNC(ring_get_blend_mix)
{
	RING_API_RETNUMBER(BLEND_MIX);
}

RING_FUNC(ring_get_tln_overlay_none)
{
	RING_API_RETNUMBER(TLN_OVERLAY_NONE);
}

RING_FUNC(ring_get_tln_overlay_shadowmask)
{
	RING_API_RETNUMBER(TLN_OVERLAY_SHADOWMASK);
}

RING_FUNC(ring_get_tln_overlay_aperture)
{
	RING_API_RETNUMBER(TLN_OVERLAY_APERTURE);
}

RING_FUNC(ring_get_tln_overlay_scanlines)
{
	RING_API_RETNUMBER(TLN_OVERLAY_SCANLINES);
}

RING_FUNC(ring_get_tln_overlay_custom)
{
	RING_API_RETNUMBER(TLN_OVERLAY_CUSTOM);
}

RING_FUNC(ring_get_tln_max_overlay)
{
	RING_API_RETNUMBER(TLN_MAX_OVERLAY);
}

RING_FUNC(ring_get_player1)
{
	RING_API_RETNUMBER(PLAYER1);
}

RING_FUNC(ring_get_player2)
{
	RING_API_RETNUMBER(PLAYER2);
}

RING_FUNC(ring_get_player3)
{
	RING_API_RETNUMBER(PLAYER3);
}

RING_FUNC(ring_get_player4)
{
	RING_API_RETNUMBER(PLAYER4);
}

RING_FUNC(ring_get_input_none)
{
	RING_API_RETNUMBER(INPUT_NONE);
}

RING_FUNC(ring_get_input_up)
{
	RING_API_RETNUMBER(INPUT_UP);
}

RING_FUNC(ring_get_input_down)
{
	RING_API_RETNUMBER(INPUT_DOWN);
}

RING_FUNC(ring_get_input_left)
{
	RING_API_RETNUMBER(INPUT_LEFT);
}

RING_FUNC(ring_get_input_right)
{
	RING_API_RETNUMBER(INPUT_RIGHT);
}

RING_FUNC(ring_get_input_button1)
{
	RING_API_RETNUMBER(INPUT_BUTTON1);
}

RING_FUNC(ring_get_input_button2)
{
	RING_API_RETNUMBER(INPUT_BUTTON2);
}

RING_FUNC(ring_get_input_button3)
{
	RING_API_RETNUMBER(INPUT_BUTTON3);
}

RING_FUNC(ring_get_input_button4)
{
	RING_API_RETNUMBER(INPUT_BUTTON4);
}

RING_FUNC(ring_get_input_button5)
{
	RING_API_RETNUMBER(INPUT_BUTTON5);
}

RING_FUNC(ring_get_input_button6)
{
	RING_API_RETNUMBER(INPUT_BUTTON6);
}

RING_FUNC(ring_get_input_start)
{
	RING_API_RETNUMBER(INPUT_START);
}

RING_FUNC(ring_get_input_quit)
{
	RING_API_RETNUMBER(INPUT_QUIT);
}

RING_FUNC(ring_get_input_crt)
{
	RING_API_RETNUMBER(INPUT_CRT);
}

RING_FUNC(ring_get_input_p1)
{
	RING_API_RETNUMBER(INPUT_P1);
}

RING_FUNC(ring_get_input_p2)
{
	RING_API_RETNUMBER(INPUT_P2);
}

RING_FUNC(ring_get_input_p3)
{
	RING_API_RETNUMBER(INPUT_P3);
}

RING_FUNC(ring_get_input_p4)
{
	RING_API_RETNUMBER(INPUT_P4);
}

RING_FUNC(ring_get_input_a)
{
	RING_API_RETNUMBER(INPUT_A);
}

RING_FUNC(ring_get_input_b)
{
	RING_API_RETNUMBER(INPUT_B);
}

RING_FUNC(ring_get_input_c)
{
	RING_API_RETNUMBER(INPUT_C);
}

RING_FUNC(ring_get_input_d)
{
	RING_API_RETNUMBER(INPUT_D);
}

RING_FUNC(ring_get_input_e)
{
	RING_API_RETNUMBER(INPUT_E);
}

RING_FUNC(ring_get_input_f)
{
	RING_API_RETNUMBER(INPUT_F);
}

RING_FUNC(ring_get_cwf_fullscreen)
{
	RING_API_RETNUMBER(CWF_FULLSCREEN);
}

RING_FUNC(ring_get_cwf_vsync)
{
	RING_API_RETNUMBER(CWF_VSYNC);
}

RING_FUNC(ring_get_cwf_s1)
{
	RING_API_RETNUMBER(CWF_S1);
}

RING_FUNC(ring_get_cwf_s2)
{
	RING_API_RETNUMBER(CWF_S2);
}

RING_FUNC(ring_get_cwf_s3)
{
	RING_API_RETNUMBER(CWF_S3);
}

RING_FUNC(ring_get_cwf_s4)
{
	RING_API_RETNUMBER(CWF_S4);
}

RING_FUNC(ring_get_cwf_s5)
{
	RING_API_RETNUMBER(CWF_S5);
}

RING_FUNC(ring_get_cwf_nearest	)
{
	RING_API_RETNUMBER(CWF_NEAREST	);
}

RING_FUNC(ring_get_tln_err_ok)
{
	RING_API_RETNUMBER(TLN_ERR_OK);
}

RING_FUNC(ring_get_tln_err_out_of_memory)
{
	RING_API_RETNUMBER(TLN_ERR_OUT_OF_MEMORY);
}

RING_FUNC(ring_get_tln_err_idx_layer)
{
	RING_API_RETNUMBER(TLN_ERR_IDX_LAYER);
}

RING_FUNC(ring_get_tln_err_idx_sprite)
{
	RING_API_RETNUMBER(TLN_ERR_IDX_SPRITE);
}

RING_FUNC(ring_get_tln_err_idx_animation)
{
	RING_API_RETNUMBER(TLN_ERR_IDX_ANIMATION);
}

RING_FUNC(ring_get_tln_err_idx_picture)
{
	RING_API_RETNUMBER(TLN_ERR_IDX_PICTURE);
}

RING_FUNC(ring_get_tln_err_ref_tileset)
{
	RING_API_RETNUMBER(TLN_ERR_REF_TILESET);
}

RING_FUNC(ring_get_tln_err_ref_tilemap)
{
	RING_API_RETNUMBER(TLN_ERR_REF_TILEMAP);
}

RING_FUNC(ring_get_tln_err_ref_spriteset)
{
	RING_API_RETNUMBER(TLN_ERR_REF_SPRITESET);
}

RING_FUNC(ring_get_tln_err_ref_palette)
{
	RING_API_RETNUMBER(TLN_ERR_REF_PALETTE);
}

RING_FUNC(ring_get_tln_err_ref_sequence)
{
	RING_API_RETNUMBER(TLN_ERR_REF_SEQUENCE);
}

RING_FUNC(ring_get_tln_err_ref_seqpack)
{
	RING_API_RETNUMBER(TLN_ERR_REF_SEQPACK);
}

RING_FUNC(ring_get_tln_err_ref_bitmap)
{
	RING_API_RETNUMBER(TLN_ERR_REF_BITMAP);
}

RING_FUNC(ring_get_tln_err_null_pointer)
{
	RING_API_RETNUMBER(TLN_ERR_NULL_POINTER);
}

RING_FUNC(ring_get_tln_err_file_not_found)
{
	RING_API_RETNUMBER(TLN_ERR_FILE_NOT_FOUND);
}

RING_FUNC(ring_get_tln_err_wrong_format)
{
	RING_API_RETNUMBER(TLN_ERR_WRONG_FORMAT);
}

RING_FUNC(ring_get_tln_err_wrong_size)
{
	RING_API_RETNUMBER(TLN_ERR_WRONG_SIZE);
}

RING_FUNC(ring_get_tln_err_unsupported)
{
	RING_API_RETNUMBER(TLN_ERR_UNSUPPORTED);
}

RING_FUNC(ring_get_tln_err_ref_list)
{
	RING_API_RETNUMBER(TLN_ERR_REF_LIST);
}

RING_FUNC(ring_get_tln_max_err)
{
	RING_API_RETNUMBER(TLN_MAX_ERR);
}

RING_FUNC(ring_get_tln_log_none)
{
	RING_API_RETNUMBER(TLN_LOG_NONE);
}

RING_FUNC(ring_get_tln_log_errors)
{
	RING_API_RETNUMBER(TLN_LOG_ERRORS);
}

RING_FUNC(ring_get_tln_log_verbose)
{
	RING_API_RETNUMBER(TLN_LOG_VERBOSE);
}

RING_FUNC(ring_new_tln_affine)
{
	TLN_Affine *pMyPointer ;
	pMyPointer = (TLN_Affine *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_Affine)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_Affine");
}

RING_FUNC(ring_new_managed_tln_affine)
{
	TLN_Affine *pMyPointer ;
	pMyPointer = (TLN_Affine *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_Affine)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_Affine",ring_state_free);
}

RING_FUNC(ring_destroy_tln_affine)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_affine_angle)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	RING_API_RETNUMBER(pMyPointer->angle);
}

RING_FUNC(ring_set_tln_affine_angle)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	pMyPointer->angle = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_affine_dx)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	RING_API_RETNUMBER(pMyPointer->dx);
}

RING_FUNC(ring_set_tln_affine_dx)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	pMyPointer->dx = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_affine_dy)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	RING_API_RETNUMBER(pMyPointer->dy);
}

RING_FUNC(ring_set_tln_affine_dy)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	pMyPointer->dy = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_affine_sx)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	RING_API_RETNUMBER(pMyPointer->sx);
}

RING_FUNC(ring_set_tln_affine_sx)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	pMyPointer->sx = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_affine_sy)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	RING_API_RETNUMBER(pMyPointer->sy);
}

RING_FUNC(ring_set_tln_affine_sy)
{
	TLN_Affine *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_Affine");
	pMyPointer->sy = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tile)
{
	Tile *pMyPointer ;
	pMyPointer = (Tile *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(Tile)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"Tile");
}

RING_FUNC(ring_new_managed_tile)
{
	Tile *pMyPointer ;
	pMyPointer = (Tile *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(Tile)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"Tile",ring_state_free);
}

RING_FUNC(ring_destroy_tile)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tile_value)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	RING_API_RETNUMBER(pMyPointer->value);
}

RING_FUNC(ring_set_tile_value)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	pMyPointer->value = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tile_index)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	RING_API_RETNUMBER(pMyPointer->index);
}

RING_FUNC(ring_set_tile_index)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	pMyPointer->index = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tile_flags)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	RING_API_RETNUMBER(pMyPointer->flags);
}

RING_FUNC(ring_set_tile_flags)
{
	Tile *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"Tile");
	pMyPointer->flags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_sequenceframe)
{
	TLN_SequenceFrame *pMyPointer ;
	pMyPointer = (TLN_SequenceFrame *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SequenceFrame)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_SequenceFrame");
}

RING_FUNC(ring_new_managed_tln_sequenceframe)
{
	TLN_SequenceFrame *pMyPointer ;
	pMyPointer = (TLN_SequenceFrame *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SequenceFrame)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_SequenceFrame",ring_state_free);
}

RING_FUNC(ring_destroy_tln_sequenceframe)
{
	TLN_SequenceFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceFrame");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_sequenceframe_index)
{
	TLN_SequenceFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceFrame");
	RING_API_RETNUMBER(pMyPointer->index);
}

RING_FUNC(ring_set_tln_sequenceframe_index)
{
	TLN_SequenceFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceFrame");
	pMyPointer->index = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_sequenceframe_delay)
{
	TLN_SequenceFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceFrame");
	RING_API_RETNUMBER(pMyPointer->delay);
}

RING_FUNC(ring_set_tln_sequenceframe_delay)
{
	TLN_SequenceFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceFrame");
	pMyPointer->delay = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_colorstrip)
{
	TLN_ColorStrip *pMyPointer ;
	pMyPointer = (TLN_ColorStrip *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_ColorStrip)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_ColorStrip");
}

RING_FUNC(ring_new_managed_tln_colorstrip)
{
	TLN_ColorStrip *pMyPointer ;
	pMyPointer = (TLN_ColorStrip *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_ColorStrip)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_ColorStrip",ring_state_free);
}

RING_FUNC(ring_destroy_tln_colorstrip)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_colorstrip_delay)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	RING_API_RETNUMBER(pMyPointer->delay);
}

RING_FUNC(ring_set_tln_colorstrip_delay)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	pMyPointer->delay = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_colorstrip_first)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	RING_API_RETNUMBER(pMyPointer->first);
}

RING_FUNC(ring_set_tln_colorstrip_first)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	pMyPointer->first = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_colorstrip_count)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	RING_API_RETNUMBER(pMyPointer->count);
}

RING_FUNC(ring_set_tln_colorstrip_count)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	pMyPointer->count = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_colorstrip_dir)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	RING_API_RETNUMBER(pMyPointer->dir);
}

RING_FUNC(ring_set_tln_colorstrip_dir)
{
	TLN_ColorStrip *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ColorStrip");
	pMyPointer->dir = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_sequenceinfo)
{
	TLN_SequenceInfo *pMyPointer ;
	pMyPointer = (TLN_SequenceInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SequenceInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_SequenceInfo");
}

RING_FUNC(ring_new_managed_tln_sequenceinfo)
{
	TLN_SequenceInfo *pMyPointer ;
	pMyPointer = (TLN_SequenceInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SequenceInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_SequenceInfo",ring_state_free);
}

RING_FUNC(ring_destroy_tln_sequenceinfo)
{
	TLN_SequenceInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceInfo");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_sequenceinfo_num_frames)
{
	TLN_SequenceInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceInfo");
	RING_API_RETNUMBER(pMyPointer->num_frames);
}

RING_FUNC(ring_set_tln_sequenceinfo_num_frames)
{
	TLN_SequenceInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SequenceInfo");
	pMyPointer->num_frames = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_spritedata)
{
	TLN_SpriteData *pMyPointer ;
	pMyPointer = (TLN_SpriteData *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_SpriteData");
}

RING_FUNC(ring_new_managed_tln_spritedata)
{
	TLN_SpriteData *pMyPointer ;
	pMyPointer = (TLN_SpriteData *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_SpriteData",ring_state_free);
}

RING_FUNC(ring_destroy_tln_spritedata)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_spritedata_x)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	RING_API_RETNUMBER(pMyPointer->x);
}

RING_FUNC(ring_set_tln_spritedata_x)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	pMyPointer->x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritedata_y)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	RING_API_RETNUMBER(pMyPointer->y);
}

RING_FUNC(ring_set_tln_spritedata_y)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	pMyPointer->y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritedata_w)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	RING_API_RETNUMBER(pMyPointer->w);
}

RING_FUNC(ring_set_tln_spritedata_w)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	pMyPointer->w = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritedata_h)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	RING_API_RETNUMBER(pMyPointer->h);
}

RING_FUNC(ring_set_tln_spritedata_h)
{
	TLN_SpriteData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteData");
	pMyPointer->h = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_spriteinfo)
{
	TLN_SpriteInfo *pMyPointer ;
	pMyPointer = (TLN_SpriteInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_SpriteInfo");
}

RING_FUNC(ring_new_managed_tln_spriteinfo)
{
	TLN_SpriteInfo *pMyPointer ;
	pMyPointer = (TLN_SpriteInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_SpriteInfo",ring_state_free);
}

RING_FUNC(ring_destroy_tln_spriteinfo)
{
	TLN_SpriteInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteInfo");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_spriteinfo_w)
{
	TLN_SpriteInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteInfo");
	RING_API_RETNUMBER(pMyPointer->w);
}

RING_FUNC(ring_set_tln_spriteinfo_w)
{
	TLN_SpriteInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteInfo");
	pMyPointer->w = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spriteinfo_h)
{
	TLN_SpriteInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteInfo");
	RING_API_RETNUMBER(pMyPointer->h);
}

RING_FUNC(ring_set_tln_spriteinfo_h)
{
	TLN_SpriteInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteInfo");
	pMyPointer->h = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_tileinfo)
{
	TLN_TileInfo *pMyPointer ;
	pMyPointer = (TLN_TileInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_TileInfo");
}

RING_FUNC(ring_new_managed_tln_tileinfo)
{
	TLN_TileInfo *pMyPointer ;
	pMyPointer = (TLN_TileInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_TileInfo",ring_state_free);
}

RING_FUNC(ring_destroy_tln_tileinfo)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_tileinfo_index)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->index);
}

RING_FUNC(ring_set_tln_tileinfo_index)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->index = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_flags)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->flags);
}

RING_FUNC(ring_set_tln_tileinfo_flags)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->flags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_row)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->row);
}

RING_FUNC(ring_set_tln_tileinfo_row)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->row = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_col)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->col);
}

RING_FUNC(ring_set_tln_tileinfo_col)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->col = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_xoffset)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->xoffset);
}

RING_FUNC(ring_set_tln_tileinfo_xoffset)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->xoffset = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_yoffset)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->yoffset);
}

RING_FUNC(ring_set_tln_tileinfo_yoffset)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->yoffset = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_color)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->color);
}

RING_FUNC(ring_set_tln_tileinfo_color)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->color = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_type)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->type);
}

RING_FUNC(ring_set_tln_tileinfo_type)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->type = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileinfo_empty)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	RING_API_RETNUMBER(pMyPointer->empty);
}

RING_FUNC(ring_set_tln_tileinfo_empty)
{
	TLN_TileInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileInfo");
	pMyPointer->empty = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_objectinfo)
{
	TLN_ObjectInfo *pMyPointer ;
	pMyPointer = (TLN_ObjectInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_ObjectInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_ObjectInfo");
}

RING_FUNC(ring_new_managed_tln_objectinfo)
{
	TLN_ObjectInfo *pMyPointer ;
	pMyPointer = (TLN_ObjectInfo *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_ObjectInfo)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_ObjectInfo",ring_state_free);
}

RING_FUNC(ring_destroy_tln_objectinfo)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_objectinfo_id)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->id);
}

RING_FUNC(ring_set_tln_objectinfo_id)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->id = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_gid)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->gid);
}

RING_FUNC(ring_set_tln_objectinfo_gid)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->gid = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_flags)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->flags);
}

RING_FUNC(ring_set_tln_objectinfo_flags)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->flags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_x)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->x);
}

RING_FUNC(ring_set_tln_objectinfo_x)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_y)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->y);
}

RING_FUNC(ring_set_tln_objectinfo_y)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_width)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->width);
}

RING_FUNC(ring_set_tln_objectinfo_width)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->width = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_height)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->height);
}

RING_FUNC(ring_set_tln_objectinfo_height)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->height = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_type)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->type);
}

RING_FUNC(ring_set_tln_objectinfo_type)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->type = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_objectinfo_visible)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	RING_API_RETNUMBER(pMyPointer->visible);
}

RING_FUNC(ring_set_tln_objectinfo_visible)
{
	TLN_ObjectInfo *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_ObjectInfo");
	pMyPointer->visible = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_tileattributes)
{
	TLN_TileAttributes *pMyPointer ;
	pMyPointer = (TLN_TileAttributes *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileAttributes)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_TileAttributes");
}

RING_FUNC(ring_new_managed_tln_tileattributes)
{
	TLN_TileAttributes *pMyPointer ;
	pMyPointer = (TLN_TileAttributes *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileAttributes)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_TileAttributes",ring_state_free);
}

RING_FUNC(ring_destroy_tln_tileattributes)
{
	TLN_TileAttributes *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileAttributes");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_tileattributes_type)
{
	TLN_TileAttributes *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileAttributes");
	RING_API_RETNUMBER(pMyPointer->type);
}

RING_FUNC(ring_set_tln_tileattributes_type)
{
	TLN_TileAttributes *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileAttributes");
	pMyPointer->type = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileattributes_priority)
{
	TLN_TileAttributes *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileAttributes");
	RING_API_RETNUMBER(pMyPointer->priority);
}

RING_FUNC(ring_set_tln_tileattributes_priority)
{
	TLN_TileAttributes *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileAttributes");
	pMyPointer->priority = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_pixelmap)
{
	TLN_PixelMap *pMyPointer ;
	pMyPointer = (TLN_PixelMap *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_PixelMap)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_PixelMap");
}

RING_FUNC(ring_new_managed_tln_pixelmap)
{
	TLN_PixelMap *pMyPointer ;
	pMyPointer = (TLN_PixelMap *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_PixelMap)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_PixelMap",ring_state_free);
}

RING_FUNC(ring_destroy_tln_pixelmap)
{
	TLN_PixelMap *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_PixelMap");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_pixelmap_dx)
{
	TLN_PixelMap *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_PixelMap");
	RING_API_RETNUMBER(pMyPointer->dx);
}

RING_FUNC(ring_set_tln_pixelmap_dx)
{
	TLN_PixelMap *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_PixelMap");
	pMyPointer->dx = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_pixelmap_dy)
{
	TLN_PixelMap *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_PixelMap");
	RING_API_RETNUMBER(pMyPointer->dy);
}

RING_FUNC(ring_set_tln_pixelmap_dy)
{
	TLN_PixelMap *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_PixelMap");
	pMyPointer->dy = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_tileimage)
{
	TLN_TileImage *pMyPointer ;
	pMyPointer = (TLN_TileImage *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileImage)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_TileImage");
}

RING_FUNC(ring_new_managed_tln_tileimage)
{
	TLN_TileImage *pMyPointer ;
	pMyPointer = (TLN_TileImage *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_TileImage)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_TileImage",ring_state_free);
}

RING_FUNC(ring_destroy_tln_tileimage)
{
	TLN_TileImage *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileImage");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_tileimage_id)
{
	TLN_TileImage *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileImage");
	RING_API_RETNUMBER(pMyPointer->id);
}

RING_FUNC(ring_set_tln_tileimage_id)
{
	TLN_TileImage *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileImage");
	pMyPointer->id = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_tileimage_type)
{
	TLN_TileImage *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileImage");
	RING_API_RETNUMBER(pMyPointer->type);
}

RING_FUNC(ring_set_tln_tileimage_type)
{
	TLN_TileImage *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_TileImage");
	pMyPointer->type = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_new_tln_spritestate)
{
	TLN_SpriteState *pMyPointer ;
	pMyPointer = (TLN_SpriteState *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteState)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"TLN_SpriteState");
}

RING_FUNC(ring_new_managed_tln_spritestate)
{
	TLN_SpriteState *pMyPointer ;
	pMyPointer = (TLN_SpriteState *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_SpriteState)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"TLN_SpriteState",ring_state_free);
}

RING_FUNC(ring_destroy_tln_spritestate)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	if (pMyPointer != NULL) {
		ring_state_free(((VM *) pPointer)->pRingState,pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_get_tln_spritestate_x)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->x);
}

RING_FUNC(ring_set_tln_spritestate_x)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_y)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->y);
}

RING_FUNC(ring_set_tln_spritestate_y)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_w)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->w);
}

RING_FUNC(ring_set_tln_spritestate_w)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->w = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_h)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->h);
}

RING_FUNC(ring_set_tln_spritestate_h)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->h = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_flags)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->flags);
}

RING_FUNC(ring_set_tln_spritestate_flags)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->flags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_index)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->index);
}

RING_FUNC(ring_set_tln_spritestate_index)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->index = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_enabled)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->enabled);
}

RING_FUNC(ring_set_tln_spritestate_enabled)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->enabled = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_get_tln_spritestate_collision)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	RING_API_RETNUMBER(pMyPointer->collision);
}

RING_FUNC(ring_set_tln_spritestate_collision)
{
	TLN_SpriteState *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = RING_API_GETCPOINTER(1,"TLN_SpriteState");
	pMyPointer->collision = RING_API_GETNUMBER(2);
}


RING_FUNC(ring_TLN_Init)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		TLN_Engine *pValue ; 
		pValue = (TLN_Engine *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_Engine)) ;
		*pValue = TLN_Init( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2), (int ) RING_API_GETNUMBER(3), (int ) RING_API_GETNUMBER(4), (int ) RING_API_GETNUMBER(5));
		RING_API_RETMANAGEDCPOINTER(pValue,"TLN_Engine",ring_state_free);
	}
}


RING_FUNC(ring_TLN_Deinit)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_Deinit();
}


RING_FUNC(ring_TLN_DeleteContext)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_DeleteContext(* (TLN_Engine  *) RING_API_GETCPOINTER(1,"TLN_Engine")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_Engine"));
}


RING_FUNC(ring_TLN_SetContext)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_SetContext(* (TLN_Engine  *) RING_API_GETCPOINTER(1,"TLN_Engine")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_Engine"));
}


RING_FUNC(ring_TLN_GetContext)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		TLN_Engine *pValue ; 
		pValue = (TLN_Engine *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(TLN_Engine)) ;
		*pValue = TLN_GetContext();
		RING_API_RETMANAGEDCPOINTER(pValue,"TLN_Engine",ring_state_free);
	}
}


RING_FUNC(ring_TLN_GetWidth)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetWidth());
}


RING_FUNC(ring_TLN_GetHeight)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetHeight());
}


RING_FUNC(ring_TLN_GetNumObjects)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetNumObjects());
}


RING_FUNC(ring_TLN_GetUsedMemory)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetUsedMemory());
}


RING_FUNC(ring_TLN_GetVersion)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetVersion());
}


RING_FUNC(ring_TLN_GetNumLayers)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetNumLayers());
}


RING_FUNC(ring_TLN_GetNumSprites)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_GetNumSprites());
}


RING_FUNC(ring_TLN_SetBGColor)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TLN_SetBGColor( (uint8_t ) RING_API_GETNUMBER(1), (uint8_t ) RING_API_GETNUMBER(2), (uint8_t ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_TLN_SetBGColorFromTilemap)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_SetBGColorFromTilemap(* (TLN_Tilemap  *) RING_API_GETCPOINTER(1,"TLN_Tilemap")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_Tilemap"));
}


RING_FUNC(ring_TLN_DisableBGColor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_DisableBGColor();
}


RING_FUNC(ring_TLN_SetBGBitmap)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_SetBGBitmap(* (TLN_Bitmap  *) RING_API_GETCPOINTER(1,"TLN_Bitmap")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_Bitmap"));
}


RING_FUNC(ring_TLN_SetBGPalette)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TLN_SetBGPalette(* (TLN_Palette  *) RING_API_GETCPOINTER(1,"TLN_Palette")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_Palette"));
}


RING_FUNC(ring_TLN_SetRasterCallback)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_SetRasterCallback(* (TLN_VideoCallback *) RING_API_GETCPOINTER(1,"TLN_VideoCallback"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_VideoCallback"));
}


RING_FUNC(ring_TLN_SetFrameCallback)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_SetFrameCallback(* (TLN_VideoCallback *) RING_API_GETCPOINTER(1,"TLN_VideoCallback"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_VideoCallback"));
}


RING_FUNC(ring_TLN_SetRenderTarget)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TLN_SetRenderTarget((uint8_t *) RING_API_GETCPOINTER(1,"uint8_t"), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_TLN_UpdateFrame)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TLN_UpdateFrame( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_TLN_SetLoadPath)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TLN_SetLoadPath((char *) RING_API_GETCPOINTER(1,"char"));
}


RING_FUNC(ring_TLN_SetCustomBlendFunction)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_SetCustomBlendFunction(* (TLN_BlendFunction *) RING_API_GETCPOINTER(1,"TLN_BlendFunction"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"TLN_BlendFunction"));
}


RING_FUNC(ring_TLN_SetLogLevel)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TLN_SetLogLevel( (TLN_LogLevel )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_TLN_OpenResourcePack)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TLN_OpenResourcePack((char *) RING_API_GETCPOINTER(1,"char"),(char *) RING_API_GETCPOINTER(2,"char")));
}


RING_FUNC(ring_TLN_CloseResourcePack)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TLN_CloseResourcePack();
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("tln_init",ring_TLN_Init);
	ring_vm_funcregister("tln_deinit",ring_TLN_Deinit);
	ring_vm_funcregister("tln_deletecontext",ring_TLN_DeleteContext);
	ring_vm_funcregister("tln_setcontext",ring_TLN_SetContext);
	ring_vm_funcregister("tln_getcontext",ring_TLN_GetContext);
	ring_vm_funcregister("tln_getwidth",ring_TLN_GetWidth);
	ring_vm_funcregister("tln_getheight",ring_TLN_GetHeight);
	ring_vm_funcregister("tln_getnumobjects",ring_TLN_GetNumObjects);
	ring_vm_funcregister("tln_getusedmemory",ring_TLN_GetUsedMemory);
	ring_vm_funcregister("tln_getversion",ring_TLN_GetVersion);
	ring_vm_funcregister("tln_getnumlayers",ring_TLN_GetNumLayers);
	ring_vm_funcregister("tln_getnumsprites",ring_TLN_GetNumSprites);
	ring_vm_funcregister("tln_setbgcolor",ring_TLN_SetBGColor);
	ring_vm_funcregister("tln_setbgcolorfromtilemap",ring_TLN_SetBGColorFromTilemap);
	ring_vm_funcregister("tln_disablebgcolor",ring_TLN_DisableBGColor);
	ring_vm_funcregister("tln_setbgbitmap",ring_TLN_SetBGBitmap);
	ring_vm_funcregister("tln_setbgpalette",ring_TLN_SetBGPalette);
	ring_vm_funcregister("tln_setrastercallback",ring_TLN_SetRasterCallback);
	ring_vm_funcregister("tln_setframecallback",ring_TLN_SetFrameCallback);
	ring_vm_funcregister("tln_setrendertarget",ring_TLN_SetRenderTarget);
	ring_vm_funcregister("tln_updateframe",ring_TLN_UpdateFrame);
	ring_vm_funcregister("tln_setloadpath",ring_TLN_SetLoadPath);
	ring_vm_funcregister("tln_setcustomblendfunction",ring_TLN_SetCustomBlendFunction);
	ring_vm_funcregister("tln_setloglevel",ring_TLN_SetLogLevel);
	ring_vm_funcregister("tln_openresourcepack",ring_TLN_OpenResourcePack);
	ring_vm_funcregister("tln_closeresourcepack",ring_TLN_CloseResourcePack);
	ring_vm_funcregister("get_tilengine_ver_maj",ring_get_tilengine_ver_maj);
	ring_vm_funcregister("get_tilengine_ver_min",ring_get_tilengine_ver_min);
	ring_vm_funcregister("get_tilengine_ver_rev",ring_get_tilengine_ver_rev);
	ring_vm_funcregister("get_tilengine_header_version",ring_get_tilengine_header_version);
	ring_vm_funcregister("get_flag_none",ring_get_flag_none);
	ring_vm_funcregister("get_flag_flipx",ring_get_flag_flipx);
	ring_vm_funcregister("get_flag_flipy",ring_get_flag_flipy);
	ring_vm_funcregister("get_flag_rotate",ring_get_flag_rotate);
	ring_vm_funcregister("get_flag_priority",ring_get_flag_priority);
	ring_vm_funcregister("get_flag_masked",ring_get_flag_masked);
	ring_vm_funcregister("get_blend_none",ring_get_blend_none);
	ring_vm_funcregister("get_blend_mix25",ring_get_blend_mix25);
	ring_vm_funcregister("get_blend_mix50",ring_get_blend_mix50);
	ring_vm_funcregister("get_blend_mix75",ring_get_blend_mix75);
	ring_vm_funcregister("get_blend_add",ring_get_blend_add);
	ring_vm_funcregister("get_blend_sub",ring_get_blend_sub);
	ring_vm_funcregister("get_blend_mod",ring_get_blend_mod);
	ring_vm_funcregister("get_blend_custom",ring_get_blend_custom);
	ring_vm_funcregister("get_max_blend",ring_get_max_blend);
	ring_vm_funcregister("get_blend_mix",ring_get_blend_mix);
	ring_vm_funcregister("get_tln_overlay_none",ring_get_tln_overlay_none);
	ring_vm_funcregister("get_tln_overlay_shadowmask",ring_get_tln_overlay_shadowmask);
	ring_vm_funcregister("get_tln_overlay_aperture",ring_get_tln_overlay_aperture);
	ring_vm_funcregister("get_tln_overlay_scanlines",ring_get_tln_overlay_scanlines);
	ring_vm_funcregister("get_tln_overlay_custom",ring_get_tln_overlay_custom);
	ring_vm_funcregister("get_tln_max_overlay",ring_get_tln_max_overlay);
	ring_vm_funcregister("get_player1",ring_get_player1);
	ring_vm_funcregister("get_player2",ring_get_player2);
	ring_vm_funcregister("get_player3",ring_get_player3);
	ring_vm_funcregister("get_player4",ring_get_player4);
	ring_vm_funcregister("get_input_none",ring_get_input_none);
	ring_vm_funcregister("get_input_up",ring_get_input_up);
	ring_vm_funcregister("get_input_down",ring_get_input_down);
	ring_vm_funcregister("get_input_left",ring_get_input_left);
	ring_vm_funcregister("get_input_right",ring_get_input_right);
	ring_vm_funcregister("get_input_button1",ring_get_input_button1);
	ring_vm_funcregister("get_input_button2",ring_get_input_button2);
	ring_vm_funcregister("get_input_button3",ring_get_input_button3);
	ring_vm_funcregister("get_input_button4",ring_get_input_button4);
	ring_vm_funcregister("get_input_button5",ring_get_input_button5);
	ring_vm_funcregister("get_input_button6",ring_get_input_button6);
	ring_vm_funcregister("get_input_start",ring_get_input_start);
	ring_vm_funcregister("get_input_quit",ring_get_input_quit);
	ring_vm_funcregister("get_input_crt",ring_get_input_crt);
	ring_vm_funcregister("get_input_p1",ring_get_input_p1);
	ring_vm_funcregister("get_input_p2",ring_get_input_p2);
	ring_vm_funcregister("get_input_p3",ring_get_input_p3);
	ring_vm_funcregister("get_input_p4",ring_get_input_p4);
	ring_vm_funcregister("get_input_a",ring_get_input_a);
	ring_vm_funcregister("get_input_b",ring_get_input_b);
	ring_vm_funcregister("get_input_c",ring_get_input_c);
	ring_vm_funcregister("get_input_d",ring_get_input_d);
	ring_vm_funcregister("get_input_e",ring_get_input_e);
	ring_vm_funcregister("get_input_f",ring_get_input_f);
	ring_vm_funcregister("get_cwf_fullscreen",ring_get_cwf_fullscreen);
	ring_vm_funcregister("get_cwf_vsync",ring_get_cwf_vsync);
	ring_vm_funcregister("get_cwf_s1",ring_get_cwf_s1);
	ring_vm_funcregister("get_cwf_s2",ring_get_cwf_s2);
	ring_vm_funcregister("get_cwf_s3",ring_get_cwf_s3);
	ring_vm_funcregister("get_cwf_s4",ring_get_cwf_s4);
	ring_vm_funcregister("get_cwf_s5",ring_get_cwf_s5);
	ring_vm_funcregister("get_cwf_nearest	",ring_get_cwf_nearest	);
	ring_vm_funcregister("get_tln_err_ok",ring_get_tln_err_ok);
	ring_vm_funcregister("get_tln_err_out_of_memory",ring_get_tln_err_out_of_memory);
	ring_vm_funcregister("get_tln_err_idx_layer",ring_get_tln_err_idx_layer);
	ring_vm_funcregister("get_tln_err_idx_sprite",ring_get_tln_err_idx_sprite);
	ring_vm_funcregister("get_tln_err_idx_animation",ring_get_tln_err_idx_animation);
	ring_vm_funcregister("get_tln_err_idx_picture",ring_get_tln_err_idx_picture);
	ring_vm_funcregister("get_tln_err_ref_tileset",ring_get_tln_err_ref_tileset);
	ring_vm_funcregister("get_tln_err_ref_tilemap",ring_get_tln_err_ref_tilemap);
	ring_vm_funcregister("get_tln_err_ref_spriteset",ring_get_tln_err_ref_spriteset);
	ring_vm_funcregister("get_tln_err_ref_palette",ring_get_tln_err_ref_palette);
	ring_vm_funcregister("get_tln_err_ref_sequence",ring_get_tln_err_ref_sequence);
	ring_vm_funcregister("get_tln_err_ref_seqpack",ring_get_tln_err_ref_seqpack);
	ring_vm_funcregister("get_tln_err_ref_bitmap",ring_get_tln_err_ref_bitmap);
	ring_vm_funcregister("get_tln_err_null_pointer",ring_get_tln_err_null_pointer);
	ring_vm_funcregister("get_tln_err_file_not_found",ring_get_tln_err_file_not_found);
	ring_vm_funcregister("get_tln_err_wrong_format",ring_get_tln_err_wrong_format);
	ring_vm_funcregister("get_tln_err_wrong_size",ring_get_tln_err_wrong_size);
	ring_vm_funcregister("get_tln_err_unsupported",ring_get_tln_err_unsupported);
	ring_vm_funcregister("get_tln_err_ref_list",ring_get_tln_err_ref_list);
	ring_vm_funcregister("get_tln_max_err",ring_get_tln_max_err);
	ring_vm_funcregister("get_tln_log_none",ring_get_tln_log_none);
	ring_vm_funcregister("get_tln_log_errors",ring_get_tln_log_errors);
	ring_vm_funcregister("get_tln_log_verbose",ring_get_tln_log_verbose);
	ring_vm_funcregister("new_tln_affine",ring_new_tln_affine);
	ring_vm_funcregister("new_managed_tln_affine",ring_new_managed_tln_affine);
	ring_vm_funcregister("destroy_tln_affine",ring_destroy_tln_affine);
	ring_vm_funcregister("get_tln_affine_angle",ring_get_tln_affine_angle);
	ring_vm_funcregister("set_tln_affine_angle",ring_set_tln_affine_angle);
	ring_vm_funcregister("get_tln_affine_dx",ring_get_tln_affine_dx);
	ring_vm_funcregister("set_tln_affine_dx",ring_set_tln_affine_dx);
	ring_vm_funcregister("get_tln_affine_dy",ring_get_tln_affine_dy);
	ring_vm_funcregister("set_tln_affine_dy",ring_set_tln_affine_dy);
	ring_vm_funcregister("get_tln_affine_sx",ring_get_tln_affine_sx);
	ring_vm_funcregister("set_tln_affine_sx",ring_set_tln_affine_sx);
	ring_vm_funcregister("get_tln_affine_sy",ring_get_tln_affine_sy);
	ring_vm_funcregister("set_tln_affine_sy",ring_set_tln_affine_sy);
	ring_vm_funcregister("new_tile",ring_new_tile);
	ring_vm_funcregister("new_managed_tile",ring_new_managed_tile);
	ring_vm_funcregister("destroy_tile",ring_destroy_tile);
	ring_vm_funcregister("get_tile_value",ring_get_tile_value);
	ring_vm_funcregister("set_tile_value",ring_set_tile_value);
	ring_vm_funcregister("get_tile_index",ring_get_tile_index);
	ring_vm_funcregister("set_tile_index",ring_set_tile_index);
	ring_vm_funcregister("get_tile_flags",ring_get_tile_flags);
	ring_vm_funcregister("set_tile_flags",ring_set_tile_flags);
	ring_vm_funcregister("new_tln_sequenceframe",ring_new_tln_sequenceframe);
	ring_vm_funcregister("new_managed_tln_sequenceframe",ring_new_managed_tln_sequenceframe);
	ring_vm_funcregister("destroy_tln_sequenceframe",ring_destroy_tln_sequenceframe);
	ring_vm_funcregister("get_tln_sequenceframe_index",ring_get_tln_sequenceframe_index);
	ring_vm_funcregister("set_tln_sequenceframe_index",ring_set_tln_sequenceframe_index);
	ring_vm_funcregister("get_tln_sequenceframe_delay",ring_get_tln_sequenceframe_delay);
	ring_vm_funcregister("set_tln_sequenceframe_delay",ring_set_tln_sequenceframe_delay);
	ring_vm_funcregister("new_tln_colorstrip",ring_new_tln_colorstrip);
	ring_vm_funcregister("new_managed_tln_colorstrip",ring_new_managed_tln_colorstrip);
	ring_vm_funcregister("destroy_tln_colorstrip",ring_destroy_tln_colorstrip);
	ring_vm_funcregister("get_tln_colorstrip_delay",ring_get_tln_colorstrip_delay);
	ring_vm_funcregister("set_tln_colorstrip_delay",ring_set_tln_colorstrip_delay);
	ring_vm_funcregister("get_tln_colorstrip_first",ring_get_tln_colorstrip_first);
	ring_vm_funcregister("set_tln_colorstrip_first",ring_set_tln_colorstrip_first);
	ring_vm_funcregister("get_tln_colorstrip_count",ring_get_tln_colorstrip_count);
	ring_vm_funcregister("set_tln_colorstrip_count",ring_set_tln_colorstrip_count);
	ring_vm_funcregister("get_tln_colorstrip_dir",ring_get_tln_colorstrip_dir);
	ring_vm_funcregister("set_tln_colorstrip_dir",ring_set_tln_colorstrip_dir);
	ring_vm_funcregister("new_tln_sequenceinfo",ring_new_tln_sequenceinfo);
	ring_vm_funcregister("new_managed_tln_sequenceinfo",ring_new_managed_tln_sequenceinfo);
	ring_vm_funcregister("destroy_tln_sequenceinfo",ring_destroy_tln_sequenceinfo);
	ring_vm_funcregister("get_tln_sequenceinfo_num_frames",ring_get_tln_sequenceinfo_num_frames);
	ring_vm_funcregister("set_tln_sequenceinfo_num_frames",ring_set_tln_sequenceinfo_num_frames);
	ring_vm_funcregister("new_tln_spritedata",ring_new_tln_spritedata);
	ring_vm_funcregister("new_managed_tln_spritedata",ring_new_managed_tln_spritedata);
	ring_vm_funcregister("destroy_tln_spritedata",ring_destroy_tln_spritedata);
	ring_vm_funcregister("get_tln_spritedata_x",ring_get_tln_spritedata_x);
	ring_vm_funcregister("set_tln_spritedata_x",ring_set_tln_spritedata_x);
	ring_vm_funcregister("get_tln_spritedata_y",ring_get_tln_spritedata_y);
	ring_vm_funcregister("set_tln_spritedata_y",ring_set_tln_spritedata_y);
	ring_vm_funcregister("get_tln_spritedata_w",ring_get_tln_spritedata_w);
	ring_vm_funcregister("set_tln_spritedata_w",ring_set_tln_spritedata_w);
	ring_vm_funcregister("get_tln_spritedata_h",ring_get_tln_spritedata_h);
	ring_vm_funcregister("set_tln_spritedata_h",ring_set_tln_spritedata_h);
	ring_vm_funcregister("new_tln_spriteinfo",ring_new_tln_spriteinfo);
	ring_vm_funcregister("new_managed_tln_spriteinfo",ring_new_managed_tln_spriteinfo);
	ring_vm_funcregister("destroy_tln_spriteinfo",ring_destroy_tln_spriteinfo);
	ring_vm_funcregister("get_tln_spriteinfo_w",ring_get_tln_spriteinfo_w);
	ring_vm_funcregister("set_tln_spriteinfo_w",ring_set_tln_spriteinfo_w);
	ring_vm_funcregister("get_tln_spriteinfo_h",ring_get_tln_spriteinfo_h);
	ring_vm_funcregister("set_tln_spriteinfo_h",ring_set_tln_spriteinfo_h);
	ring_vm_funcregister("new_tln_tileinfo",ring_new_tln_tileinfo);
	ring_vm_funcregister("new_managed_tln_tileinfo",ring_new_managed_tln_tileinfo);
	ring_vm_funcregister("destroy_tln_tileinfo",ring_destroy_tln_tileinfo);
	ring_vm_funcregister("get_tln_tileinfo_index",ring_get_tln_tileinfo_index);
	ring_vm_funcregister("set_tln_tileinfo_index",ring_set_tln_tileinfo_index);
	ring_vm_funcregister("get_tln_tileinfo_flags",ring_get_tln_tileinfo_flags);
	ring_vm_funcregister("set_tln_tileinfo_flags",ring_set_tln_tileinfo_flags);
	ring_vm_funcregister("get_tln_tileinfo_row",ring_get_tln_tileinfo_row);
	ring_vm_funcregister("set_tln_tileinfo_row",ring_set_tln_tileinfo_row);
	ring_vm_funcregister("get_tln_tileinfo_col",ring_get_tln_tileinfo_col);
	ring_vm_funcregister("set_tln_tileinfo_col",ring_set_tln_tileinfo_col);
	ring_vm_funcregister("get_tln_tileinfo_xoffset",ring_get_tln_tileinfo_xoffset);
	ring_vm_funcregister("set_tln_tileinfo_xoffset",ring_set_tln_tileinfo_xoffset);
	ring_vm_funcregister("get_tln_tileinfo_yoffset",ring_get_tln_tileinfo_yoffset);
	ring_vm_funcregister("set_tln_tileinfo_yoffset",ring_set_tln_tileinfo_yoffset);
	ring_vm_funcregister("get_tln_tileinfo_color",ring_get_tln_tileinfo_color);
	ring_vm_funcregister("set_tln_tileinfo_color",ring_set_tln_tileinfo_color);
	ring_vm_funcregister("get_tln_tileinfo_type",ring_get_tln_tileinfo_type);
	ring_vm_funcregister("set_tln_tileinfo_type",ring_set_tln_tileinfo_type);
	ring_vm_funcregister("get_tln_tileinfo_empty",ring_get_tln_tileinfo_empty);
	ring_vm_funcregister("set_tln_tileinfo_empty",ring_set_tln_tileinfo_empty);
	ring_vm_funcregister("new_tln_objectinfo",ring_new_tln_objectinfo);
	ring_vm_funcregister("new_managed_tln_objectinfo",ring_new_managed_tln_objectinfo);
	ring_vm_funcregister("destroy_tln_objectinfo",ring_destroy_tln_objectinfo);
	ring_vm_funcregister("get_tln_objectinfo_id",ring_get_tln_objectinfo_id);
	ring_vm_funcregister("set_tln_objectinfo_id",ring_set_tln_objectinfo_id);
	ring_vm_funcregister("get_tln_objectinfo_gid",ring_get_tln_objectinfo_gid);
	ring_vm_funcregister("set_tln_objectinfo_gid",ring_set_tln_objectinfo_gid);
	ring_vm_funcregister("get_tln_objectinfo_flags",ring_get_tln_objectinfo_flags);
	ring_vm_funcregister("set_tln_objectinfo_flags",ring_set_tln_objectinfo_flags);
	ring_vm_funcregister("get_tln_objectinfo_x",ring_get_tln_objectinfo_x);
	ring_vm_funcregister("set_tln_objectinfo_x",ring_set_tln_objectinfo_x);
	ring_vm_funcregister("get_tln_objectinfo_y",ring_get_tln_objectinfo_y);
	ring_vm_funcregister("set_tln_objectinfo_y",ring_set_tln_objectinfo_y);
	ring_vm_funcregister("get_tln_objectinfo_width",ring_get_tln_objectinfo_width);
	ring_vm_funcregister("set_tln_objectinfo_width",ring_set_tln_objectinfo_width);
	ring_vm_funcregister("get_tln_objectinfo_height",ring_get_tln_objectinfo_height);
	ring_vm_funcregister("set_tln_objectinfo_height",ring_set_tln_objectinfo_height);
	ring_vm_funcregister("get_tln_objectinfo_type",ring_get_tln_objectinfo_type);
	ring_vm_funcregister("set_tln_objectinfo_type",ring_set_tln_objectinfo_type);
	ring_vm_funcregister("get_tln_objectinfo_visible",ring_get_tln_objectinfo_visible);
	ring_vm_funcregister("set_tln_objectinfo_visible",ring_set_tln_objectinfo_visible);
	ring_vm_funcregister("new_tln_tileattributes",ring_new_tln_tileattributes);
	ring_vm_funcregister("new_managed_tln_tileattributes",ring_new_managed_tln_tileattributes);
	ring_vm_funcregister("destroy_tln_tileattributes",ring_destroy_tln_tileattributes);
	ring_vm_funcregister("get_tln_tileattributes_type",ring_get_tln_tileattributes_type);
	ring_vm_funcregister("set_tln_tileattributes_type",ring_set_tln_tileattributes_type);
	ring_vm_funcregister("get_tln_tileattributes_priority",ring_get_tln_tileattributes_priority);
	ring_vm_funcregister("set_tln_tileattributes_priority",ring_set_tln_tileattributes_priority);
	ring_vm_funcregister("new_tln_pixelmap",ring_new_tln_pixelmap);
	ring_vm_funcregister("new_managed_tln_pixelmap",ring_new_managed_tln_pixelmap);
	ring_vm_funcregister("destroy_tln_pixelmap",ring_destroy_tln_pixelmap);
	ring_vm_funcregister("get_tln_pixelmap_dx",ring_get_tln_pixelmap_dx);
	ring_vm_funcregister("set_tln_pixelmap_dx",ring_set_tln_pixelmap_dx);
	ring_vm_funcregister("get_tln_pixelmap_dy",ring_get_tln_pixelmap_dy);
	ring_vm_funcregister("set_tln_pixelmap_dy",ring_set_tln_pixelmap_dy);
	ring_vm_funcregister("new_tln_tileimage",ring_new_tln_tileimage);
	ring_vm_funcregister("new_managed_tln_tileimage",ring_new_managed_tln_tileimage);
	ring_vm_funcregister("destroy_tln_tileimage",ring_destroy_tln_tileimage);
	ring_vm_funcregister("get_tln_tileimage_id",ring_get_tln_tileimage_id);
	ring_vm_funcregister("set_tln_tileimage_id",ring_set_tln_tileimage_id);
	ring_vm_funcregister("get_tln_tileimage_type",ring_get_tln_tileimage_type);
	ring_vm_funcregister("set_tln_tileimage_type",ring_set_tln_tileimage_type);
	ring_vm_funcregister("new_tln_spritestate",ring_new_tln_spritestate);
	ring_vm_funcregister("new_managed_tln_spritestate",ring_new_managed_tln_spritestate);
	ring_vm_funcregister("destroy_tln_spritestate",ring_destroy_tln_spritestate);
	ring_vm_funcregister("get_tln_spritestate_x",ring_get_tln_spritestate_x);
	ring_vm_funcregister("set_tln_spritestate_x",ring_set_tln_spritestate_x);
	ring_vm_funcregister("get_tln_spritestate_y",ring_get_tln_spritestate_y);
	ring_vm_funcregister("set_tln_spritestate_y",ring_set_tln_spritestate_y);
	ring_vm_funcregister("get_tln_spritestate_w",ring_get_tln_spritestate_w);
	ring_vm_funcregister("set_tln_spritestate_w",ring_set_tln_spritestate_w);
	ring_vm_funcregister("get_tln_spritestate_h",ring_get_tln_spritestate_h);
	ring_vm_funcregister("set_tln_spritestate_h",ring_set_tln_spritestate_h);
	ring_vm_funcregister("get_tln_spritestate_flags",ring_get_tln_spritestate_flags);
	ring_vm_funcregister("set_tln_spritestate_flags",ring_set_tln_spritestate_flags);
	ring_vm_funcregister("get_tln_spritestate_index",ring_get_tln_spritestate_index);
	ring_vm_funcregister("set_tln_spritestate_index",ring_set_tln_spritestate_index);
	ring_vm_funcregister("get_tln_spritestate_enabled",ring_get_tln_spritestate_enabled);
	ring_vm_funcregister("set_tln_spritestate_enabled",ring_set_tln_spritestate_enabled);
	ring_vm_funcregister("get_tln_spritestate_collision",ring_get_tln_spritestate_collision);
	ring_vm_funcregister("set_tln_spritestate_collision",ring_set_tln_spritestate_collision);
}