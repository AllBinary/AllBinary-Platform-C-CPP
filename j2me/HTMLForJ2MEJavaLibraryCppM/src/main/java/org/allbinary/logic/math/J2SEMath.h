
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H
        #define ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class J2SEMath
            : public virtual Object
         {

    private: static J2SEMath* instance_owner();
    private: static J2SEMath* instance;

    public: static J2SEMath* getInstance();


            
    public: J2SEMath();
        
    public: int32_t round(float value);

    public: float abs(float value);

    public: double absdouble(double value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H_COMPLETE
        
        #endif
    
