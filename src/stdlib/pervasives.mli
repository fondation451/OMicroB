type pin =
    PIN0
  | PIN1
  | PIN2
  | PIN3
  | PIN4
  | PIN5
  | PIN6
  | PIN7
  | PIN8
  | PIN9
  | PIN10
  | PIN11
  | PIN12
  | PIN13
  | PIN14
  | PIN15
  | PIN16
  | PIN17
type mode = INPUT | OUTPUT
external force_gc : unit -> unit = "caml_force_gc"
external not : bool -> bool = "%boolnot"
external ( & ) : bool -> bool -> bool = "%sequand"
external ( && ) : bool -> bool -> bool = "%sequand"
external ( or ) : bool -> bool -> bool = "%sequor"
external ( || ) : bool -> bool -> bool = "%sequor"
external ( land ) : int -> int -> int = "%andint"
external ( lor ) : int -> int -> int = "%orint"
external ( lxor ) : int -> int -> int = "%xorint"
val lnot : int -> int
external ( lsl ) : int -> int -> int = "%lslint"
external ( lsr ) : int -> int -> int = "%lsrint"
external ( asr ) : int -> int -> int = "%asrint"
external ( ~- ) : int -> int = "%negint"
external ( ~+ ) : int -> int = "%identity"
external succ : int -> int = "%succint"
external pred : int -> int = "%predint"
external ( + ) : int -> int -> int = "%addint"
external ( - ) : int -> int -> int = "%subint"
external ( * ) : int -> int -> int = "%mulint"
external ( / ) : int -> int -> int = "%divint"
external ( mod ) : int -> int -> int = "%modint"
external ( ~-. ) : float -> float = "%negfloat"
external ( ~+. ) : float -> float = "%identity"
external ( +. ) : float -> float -> float = "%addfloat"
external ( -. ) : float -> float -> float = "%subfloat"
external ( *. ) : float -> float -> float = "%mulfloat"
external ( /. ) : float -> float -> float = "%divfloat"
external ( = ) : 'a -> 'a -> bool = "%equal"
external ( <> ) : 'a -> 'a -> bool = "%notequal"
external ( < ) : 'a -> 'a -> bool = "%lessthan"
external ( > ) : 'a -> 'a -> bool = "%greaterthan"
external ( <= ) : 'a -> 'a -> bool = "%lessequal"
external ( >= ) : 'a -> 'a -> bool = "%greaterequal"
external compare : 'a -> 'a -> int = "%compare"
type 'a ref = { mutable contents : 'a; }
external ref : 'a -> 'a ref = "%makemutable"
external ( ! ) : 'a ref -> 'a = "%field0"
external ( := ) : 'a ref -> 'a -> unit = "%setfield0"
external incr : int ref -> unit = "%incr"
external decr : int ref -> unit = "%decr"
external print_string : string -> unit = "caml_print_string"
external print_int : int -> unit = "caml_print_int"
external print_float : float -> unit = "caml_print_float"
external pin_mode : pin -> mode -> unit = "caml_pin_mode" [@@noalloc]
external digital_read : pin -> bool = "caml_digital_read" [@@noalloc]
external digital_write : pin -> bool -> unit = "caml_digital_write"
  [@@noalloc]
external delay : int -> unit = "caml_delay" [@@noalloc]
external millis : unit -> int = "caml_avr_millis" [@@noalloc]
external serial_begin : int -> unit = "caml_avr_serial_begin" [@@noalloc]
external raise : exn -> 'a = "%raise"
val ( @ ) : 'a list -> 'a list -> 'a list
