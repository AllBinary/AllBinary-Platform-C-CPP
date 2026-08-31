
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogLocationInput.h"

class AnalogLocationInputFactory
            : public Object
         {
        

    private: static const instance: AnalogLocationInputFactory = new AnalogLocationInputFactory();

    public static AnalogLocationInputFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogLocationInputFactory.instance;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public addPlayer(int32_t playerInputId){

    analogLocationInput: AnalogLocationInput = AnalogLocationInput.NULL_ANALOG_LOCATION_INPUT;;
    

                        if(playerInputId < this.list.size())
                        
                                    {
                                    analogLocationInput= this.list.get(playerInputId) as AnalogLocationInput;
    

                                    }
                                

                        if(analogLocationInput == AnalogLocationInput.NULL_ANALOG_LOCATION_INPUT)
                        
                                    {
                                    analogLocationInput= new AnalogLocationInput(playerInputId);
    
this.list.add(analogLocationInput);
    

                                    }
                                
}


    public AnalogLocationInput getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.get(playerInputId) as AnalogLocationInput;
    
}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

