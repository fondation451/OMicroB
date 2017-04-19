typedef enum {
  ACC0,
  ACC1,
  ACC2,
  ACC3,
  ACC4,
  ACC5,
  ACC6,
  ACC7,
  ACC,
  PUSH,
  PUSHACC1,
  PUSHACC2,
  PUSHACC3,
  PUSHACC4,
  PUSHACC5,
  PUSHACC6,
  PUSHACC7,
  PUSHACC,
  POP,
  ASSIGN,
  ENVACC1,
  ENVACC2,
  ENVACC3,
  ENVACC4,
  ENVACC,
  PUSHENVACC1,
  PUSHENVACC2,
  PUSHENVACC3,
  PUSHENVACC4,
  PUSHENVACC,
  PUSH_RETADDR_1B,
  PUSH_RETADDR_2B,
  PUSH_RETADDR_4B,
  APPLY,
  APPLY1,
  APPLY2,
  APPLY3,
  APPTERM,
  APPTERM1,
  APPTERM2,
  APPTERM3,
  RETURN,
  RESTART,
  GRAB,
  CLOSURE_1B,
  CLOSURE_2B,
  CLOSURE_4B,
  CLOSUREREC,
  CLOSUREREC_1B,
  CLOSUREREC_2B,
  CLOSUREREC_4B,
  OFFSETCLOSUREM2,
  OFFSETCLOSURE0,
  OFFSETCLOSURE2,
  OFFSETCLOSURE,
  PUSHOFFSETCLOSUREM2,
  PUSHOFFSETCLOSURE0,
  PUSHOFFSETCLOSURE2,
  PUSHOFFSETCLOSURE,
  GETGLOBAL,
  PUSHGETGLOBAL_1B,
  PUSHGETGLOBAL_2B,
  GETGLOBALFIELD_1B,
  GETGLOBALFIELD_2B,
  PUSHGETGLOBALFIELD_1B,
  PUSHGETGLOBALFIELD_2B,
  SETGLOBAL_1B,
  SETGLOBAL_2B,
  ATOM0,
  PUSHATOM0,
  MAKEBLOCK_1B,
  MAKEBLOCK_2B,
  MAKEBLOCK1,
  MAKEBLOCK2,
  MAKEBLOCK3,
  MAKEFLOATBLOCK,
  GETFIELD0,
  GETFIELD1,
  GETFIELD2,
  GETFIELD3,
  GETFIELD,
  GETFLOATFIELD,
  SETFIELD0,
  SETFIELD1,
  SETFIELD2,
  SETFIELD3,
  SETFIELD,
  SETFLOATFIELD,
  VECTLENGTH,
  GETVECTITEM,
  SETVECTITEM,
  GETSTRINGCHAR,
  SETSTRINGCHAR,
  BRANCH_1B,
  BRANCH_2B,
  BRANCH_4B,
  BRANCHIF_1B,
  BRANCHIF_2B,
  BRANCHIF_4B,
  BRANCHIFNOT_1B,
  BRANCHIFNOT_2B,
  BRANCHIFNOT_4B,
  SWITCH_1B,
  SWITCH_2B,
  SWITCH_4B,
  BOOLNOT,
  PUSHTRAP_1B,
  PUSHTRAP_2B,
  PUSHTRAP_4B,
  POPTRAP,
  RAISE,
  CHECK_SIGNALS,
  C_CALL1,
  C_CALL2,
  C_CALL3,
  C_CALL4,
  C_CALL5,
  C_CALLN,
  CONST0,
  CONST1,
  CONST2,
  CONST3,
  CONSTINT_1B,
  CONSTINT_2B,
  CONSTINT_4B,
  PUSHCONST0,
  PUSHCONST1,
  PUSHCONST2,
  PUSHCONST3,
  PUSHCONSTINT_1B,
  PUSHCONSTINT_2B,
  PUSHCONSTINT_4B,
  NEGINT,
  ADDINT,
  SUBINT,
  MULINT,
  DIVINT,
  MODINT,
  ANDINT,
  ORINT,
  XORINT,
  LSLINT,
  LSRINT,
  ASRINT,
  EQ,
  NEQ,
  LTINT,
  LEINT,
  GTINT,
  GEINT,
  OFFSETINT_1B,
  OFFSETINT_2B,
  OFFSETINT_4B,
  OFFSETREF_1B,
  OFFSETREF_2B,
  OFFSETREF_4B,
  ISINT,
  GETMETHOD,
  BEQ_1B,
  BEQ_2B,
  BEQ_4B,
  BNEQ_1B,
  BNEQ_2B,
  BNEQ_4B,
  BLTINT_1B,
  BLTINT_2B,
  BLTINT_4B,
  BLEINT_1B,
  BLEINT_2B,
  BLEINT_4B,
  BGTINT_1B,
  BGTINT_2B,
  BGTINT_4B,
  BGEINT_1B,
  BGEINT_2B,
  BGEINT_4B,
  ULTINT,
  UGEINT,
  BULTINT_1B,
  BULTINT_2B,
  BULTINT_4B,
  BUGEINT_1B,
  BUGEINT_2B,
  BUGEINT_4B,
  GETPUBMET,
  GETDYNMET,
  STOP /*
  ,
  EVENT,
  BREAK
  , RERAISE, RAISE_NOTRACE  */
} inst;
