#ifndef ams_lv__haas_ttl_hpp
#define ams_lv__haas_ttl_hpp


#ifndef PEG_STRUCT
#define PEG_STRUCT
typedef struct {
  float min;
  float max;
  float default_value;
  char toggled;
  char integer;
  char logarithmic;
} peg_data_t;
#endif

/* <http://github.com/blablack/ams-lv2/haas> */

static const char p_uri[] = "http://github.com/blablack/ams-lv2/haas";

enum p_port_enum {
  p_input_l,
  p_input_r,
  p_delay,
  p_dry_wet,
  p_output_l,
  p_output_r,
  p_n_ports
};

static const peg_data_t p_ports[] = {
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
  { 5, 40, 20, 0, 0, 0 }, 
  { 0, 100, 50, 0, 0, 0 }, 
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
};


#endif /* ams_lv__haas_ttl_hpp */
