
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_CUSTOMTRANSFORMINFO_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_CUSTOMTRANSFORMINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTransformInfo: public TransformInfo, public virtual TransformInfoInterface {

public: CustomTransformInfo(std::string outputTypeName, std::string inputOutputTypeName, std::string inputOutputTypeFile, std::string name, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName, std::string dataFileName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_CUSTOMTRANSFORMINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_CUSTOMTRANSFORMINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_CUSTOMTRANSFORMINFO_H_COMPLETE
        #if __has_include("org/allbinary/logic/visual/transform/info/TransformInfo.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif

        #endif
    
