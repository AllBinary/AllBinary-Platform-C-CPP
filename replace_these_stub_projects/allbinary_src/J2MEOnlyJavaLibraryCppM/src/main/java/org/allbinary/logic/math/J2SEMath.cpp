
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class J2SEMath
            : public Object
         {

    private: static J2SEMath* instance() { static std::unique_ptr<J2SEMath> value(new J2SEMath()); return value.get(); }

    public: static J2SEMath* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEMath::instance();
    
}


    public: int32_t round(float value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(value);
    
}


    public: float abs(float value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    public: double absdouble(double value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


};

            

