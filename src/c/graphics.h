#include <pebble.h>

#define NUM_TICS 6                                                                                                               
static const struct GPathInfo ANALOG_BG_POINTS[] = {                                                                             
  { 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {70, 6},                                                                                                                   
      {74, 7},                                                                                                                   
      {74, 21},                                                                                                                  
      {70, 21}                                                                                                                   
    }                                                                                                                            
  },                                                                                                                             
  { 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {137, 43},                                                                                                                 
      {139, 47},                                                                                                                 
      {127, 54},                                                                                                                 
      {125, 50}                                                                                                                  
    }                                                                                                                            
  },    
{ 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {139, 120},                                                                                                                
      {137, 124},                                                                                                                
      {125, 117},                                                                                                                
      {127, 113}                                                                                                                 
    }                                                                                                                            
  },                                                                                                                             
  { 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {74, 161},                                                                                                                 
      {70, 161},                                                                                                                 
      {70, 147},                                                                                                                 
      {74, 146}                                                                                                                  
    }                                                                                                                            
  },                                                                                                                             
  { 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {6, 124},                                                                                                                  
      {4, 120},                                                                                                                  
      {16, 113},                                                                                                                 
      {18, 117}                                                                                                                  
    }                                                                                                                            
  },  
 { 4,                                                                                                                           
    (GPoint []) {                                                                                                                
      {4, 47},                                                                                                                   
      {6, 43},                                                                                                                   
      {18, 50},                                                                                                                  
      {16, 54}                                                                                                                   
    }                                                                                                                            
  },                                                                                                                             
};

static const GPathInfo MINUTE_HAND_POINTS = {
  3,
  (GPoint []) {
    { -6, 20 },
    { 6, 20 },
    { 0, -80 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  3, (GPoint []){
    {-6, 20},
    {6, 20},
    {0, -50}
  }
};