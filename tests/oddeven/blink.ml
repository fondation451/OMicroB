module Arduboy = struct
  external millis : unit -> int = "ocaml_arduino_millis"
  external init    : unit   -> unit = "ocaml_arduboy_init"
  external print_int : int -> unit = "ocaml_arduboy_print_int"
  external print_string   : string -> unit = "ocaml_arduboy_print"
  external display : unit   -> unit = "ocaml_arduboy_display"
  external clear : unit -> unit = "ocaml_arduboy_clear"
end


let rec odd x = 
  if x = 0 then false
  else
    even (x-1)
and even x =
  if x = 0 then true 
  else 
    odd (x-1)

let () =
  Arduboy.init();
  let x = Arduboy.millis () in 
  for i = 0 to 100 do 
    odd i;
  done;
  let y = Arduboy.millis () - x in 
  Arduboy.print_int y;
  Arduboy.display ();
