
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoData
            : public virtual Object
         {

    private: static TransformInfoData* instance_owner();
    private: static TransformInfoData* instance;

    public: static TransformInfoData* getInstance();

private: TransformInfoData();

    public: const std::string PARENT = "TRANSFORM_INFO_PARENT";

    public: const std::string MAPPED = "TRANSFORM_INFO_MAPPED";

    public: const std::string NAME = "TRANSFORM_INFO_NAME";

    public: const std::string DESCRIPTION = "TRANSFORM_INFO_DESCRIPTION";

    public: const std::string CATEGORY = "TRANSFORM_INFO_CATEGORY";

    public: const std::string OBJECTFILENAME = "TRANSFORM_INFO_OBJECTFILENAME";

    public: const std::string OBJECT = "TRANSFORM_INFO_OBJECT";

    public: const std::string OBJECTCONFIGFILENAME = "TRANSFORM_INFO_OBJECTCONFIGFILENAME";

    public: const std::string OBJECTCONFIG = "TRANSFORM_INFO_OBJECTCONFIG";

    public: const std::string TEMPLATEFILENAME = "TRANSFORM_INFO_TEMPLATEFILENAME";

    public: const std::string TEMPLATE = "TRANSFORM_INFO_TEMPLATE";

    public: const std::string DATAFILENAME = "TRANSFORM_INFO_DATAFILENAME";

    public: const std::string DATA = "TRANSFORM_INFO_DATA";

    public: const std::string LABEL = "TRANSFORM_INFO_LABEL";

    public: const std::string OWNER;

    public: const std::string PARTIAL;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H_COMPLETE
        
        #endif
    
