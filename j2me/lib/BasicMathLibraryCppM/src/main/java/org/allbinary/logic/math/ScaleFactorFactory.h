
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleFactorFactory
            : public Object
         {

    private: static ScaleFactorFactory* instance() { static std::unique_ptr<ScaleFactorFactory> value(new ScaleFactorFactory()); return value.get(); }

    public: static ScaleFactorFactory* getInstance();

    public: int32_t DEFAULT_SCALE_FACTOR = 10;

    public: int32_t DEFAULT_SCALE_VALUE = 1024;

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
