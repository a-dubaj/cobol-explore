/* Generated by           cobc 3.1.2.0 */
/* Generated from         game.cbl */
/* Generated at           Mar 28 2023 19:36:11 */
/* GnuCOBOL build date    Sep 14 2021 19:23:38 */
/* GnuCOBOL package date  Dec 23 2020 12:04:58 UTC */
/* Compile command        cobc -x -Wall -lSDL2 -lSDL2_image -C game.cbl sdl.c */

/* Program local variables for 'game' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;

/* Decimal structures */
cob_decimal	*d0 = NULL;
cob_decimal	*d1 = NULL;
cob_decimal	*d2 = NULL;


/* Call pointers */
static cob_call_union	call_SDL_DestroyRenderer;
static cob_call_union	call_SDL_DestroyWindow;
static cob_call_union	call_SDL_Quit;
static cob_call_union	call_SDL_PollEvent;
static cob_call_union	call_SDL_RenderClear;
static cob_call_union	call_SDL_RenderCopy;
static cob_call_union	call_SDL_RenderCopyEx;
static cob_call_union	call_SDL_RenderPresent;
static cob_call_union	call_SDL_Delay;
static cob_call_union	call_SDL_Init;
static cob_call_union	call_SDL_CreateWindow;
static cob_call_union	call_SDL_CreateRenderer;
static cob_call_union	call_load__texture;

/* Local cob_field items */
cob_field		f0;


/* Call parameters */
cob_field		*cob_procedure_params[7];

/* Perform frame stack */
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_2;	/* RETURN-CODE */
static cob_u8_t	b_8[4] __attribute__((aligned));	/* sdl-init-video */
static cob_u8_t	b_9[4] __attribute__((aligned));	/* sdl-renderer-accelerated */
static cob_u8_t	b_10[128] __attribute__((aligned));	/* sdl-event */
static cob_u8_t	b_34[4] __attribute__((aligned));	/* control-fields */
static cob_u8_t	b_43[1] __attribute__((aligned));	/* done-flag */
static cob_u8_t	b_45[4] __attribute__((aligned));	/* event-found */
static cob_u8_t	b_49[1] __attribute__((aligned));	/* ground-gen */
static cob_u8_t	b_52[4] __attribute__((aligned));	/* ground-col-index */
static cob_u8_t	b_53[4] __attribute__((aligned));	/* ground-row-index */
static cob_u8_t	b_54[4] __attribute__((aligned));	/* ground-render-col-index */
static cob_u8_t	b_55[4] __attribute__((aligned));	/* ground-render-row-index */
static cob_u8_t	b_56[4] __attribute__((aligned));	/* ground-render-row-start */
static cob_u8_t	b_57[270] __attribute__((aligned));	/* ground-rows */
static cob_u8_t	b_61[4] __attribute__((aligned));	/* ground-render-offset-y */
static cob_u8_t	b_62[8] __attribute__((aligned));	/* random-value */
static cob_u8_t	b_63[8] __attribute__((aligned));	/* collision-offset */
static cob_u8_t	b_66[1] __attribute__((aligned));	/* collision-flag */
static cob_u8_t	b_68[4] __attribute__((aligned));	/* collision-free-time */
static cob_u8_t	b_70[4] __attribute__((aligned));	/* speed */
static cob_u8_t	b_71[8] __attribute__((aligned));	/* ground-texture */
static cob_u8_t	b_72[8] __attribute__((aligned));	/* player-texture */
static cob_u8_t	b_73[8] __attribute__((aligned));	/* wall-texture */
static cob_u8_t	b_74[8] __attribute__((aligned));	/* renderer */
static cob_u8_t	b_75[4] __attribute__((aligned));	/* seed */
static cob_u8_t	b_77[8] __attribute__((aligned));	/* win */
static cob_u8_t	b_81[16] __attribute__((aligned));	/* ground-src-rect */
static cob_u8_t	b_86[16] __attribute__((aligned));	/* ground-dst-rect */
static cob_u8_t	b_91[16] __attribute__((aligned));	/* player-src-rect */
static cob_u8_t	b_96[16] __attribute__((aligned));	/* player-dst-rect */
static cob_u8_t	b_101[2] __attribute__((aligned));	/* solid-sides */
static cob_u8_t	b_109[4] __attribute__((aligned));	/* step-frame-actual */
static cob_u8_t	b_110[4] __attribute__((aligned));	/* step-frame */
static cob_u8_t	b_114[8] __attribute__((aligned));	/* angle */

/* End of local data storage */


/* Fields (local) */
static cob_field f_8	= {4, b_8, &a_4};	/* sdl-init-video */
static cob_field f_9	= {4, b_9, &a_4};	/* sdl-renderer-accelerated */
static cob_field f_10	= {128, b_10, &a_9};	/* sdl-event */
static cob_field f_45	= {4, b_45, &a_4};	/* event-found */
static cob_field f_52	= {4, b_52, &a_4};	/* ground-col-index */
static cob_field f_53	= {4, b_53, &a_4};	/* ground-row-index */
static cob_field f_54	= {4, b_54, &a_4};	/* ground-render-col-index */
static cob_field f_55	= {4, b_55, &a_4};	/* ground-render-row-index */
static cob_field f_56	= {4, b_56, &a_4};	/* ground-render-row-start */
static cob_field f_61	= {4, b_61, &a_4};	/* ground-render-offset-y */
static cob_field f_62	= {8, b_62, &a_6};	/* random-value */
static cob_field f_64	= {4, b_63, &a_4};	/* collision-offset-x */
static cob_field f_65	= {4, b_63 + 4, &a_4};	/* collision-offset-y */
static cob_field f_68	= {4, b_68, &a_4};	/* collision-free-time */
static cob_field f_70	= {4, b_70, &a_4};	/* speed */
static cob_field f_71	= {8, b_71, &a_3};	/* ground-texture */
static cob_field f_72	= {8, b_72, &a_3};	/* player-texture */
static cob_field f_73	= {8, b_73, &a_3};	/* wall-texture */
static cob_field f_74	= {8, b_74, &a_3};	/* renderer */
static cob_field f_75	= {4, b_75, &a_4};	/* seed */
static cob_field f_77	= {8, b_77, &a_3};	/* win */
static cob_field f_81	= {16, b_81, &a_10};	/* ground-src-rect */
static cob_field f_82	= {4, b_81, &a_4};	/* ground-src-rect-x */
static cob_field f_83	= {4, b_81 + 4, &a_4};	/* ground-src-rect-y */
static cob_field f_84	= {4, b_81 + 8, &a_4};	/* ground-src-rect-w */
static cob_field f_85	= {4, b_81 + 12, &a_4};	/* ground-src-rect-h */
static cob_field f_86	= {16, b_86, &a_10};	/* ground-dst-rect */
static cob_field f_87	= {4, b_86, &a_4};	/* ground-dst-rect-x */
static cob_field f_88	= {4, b_86 + 4, &a_4};	/* ground-dst-rect-y */
static cob_field f_89	= {4, b_86 + 8, &a_4};	/* ground-dst-rect-w */
static cob_field f_90	= {4, b_86 + 12, &a_4};	/* ground-dst-rect-h */
static cob_field f_91	= {16, b_91, &a_10};	/* player-src-rect */
static cob_field f_92	= {4, b_91, &a_4};	/* player-src-rect-x */
static cob_field f_93	= {4, b_91 + 4, &a_4};	/* player-src-rect-y */
static cob_field f_94	= {4, b_91 + 8, &a_4};	/* player-src-rect-w */
static cob_field f_95	= {4, b_91 + 12, &a_4};	/* player-src-rect-h */
static cob_field f_96	= {16, b_96, &a_10};	/* player-dst-rect */
static cob_field f_97	= {4, b_96, &a_4};	/* player-dst-rect-x */
static cob_field f_98	= {4, b_96 + 4, &a_4};	/* player-dst-rect-y */
static cob_field f_99	= {4, b_96 + 8, &a_4};	/* player-dst-rect-w */
static cob_field f_100	= {4, b_96 + 12, &a_4};	/* player-dst-rect-h */
static cob_field f_109	= {4, b_109, &a_4};	/* step-frame-actual */
static cob_field f_110	= {4, b_110, &a_4};	/* step-frame */
static cob_field f_114	= {8, b_114, &a_6};	/* angle */

/* End of fields */

