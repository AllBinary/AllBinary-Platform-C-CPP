
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
        #define ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleFactorFactory
            : public Object
         {
        

    private: static const instance: ScaleFactorFactory = new ScaleFactorFactory();

    public static ScaleFactorFactory getInstance();

    public DEFAULT_SCALE_FACTOR: int32_t = 10;

    public DEFAULT_SCALE_VALUE: int32_t = 1024;

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
