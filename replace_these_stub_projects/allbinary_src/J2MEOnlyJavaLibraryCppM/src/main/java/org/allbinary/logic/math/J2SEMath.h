
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

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class J2SEMath
            : public Object
         {
        

    private: static const instance: J2SEMath = new J2SEMath();

    public static J2SEMath getInstance();

    public int32_t round(float value);

    public float abs(float value);

    public double absdouble(double value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H
