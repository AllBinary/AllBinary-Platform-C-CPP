
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoData
            : public Object
         {

    private: static TransformInfoData instance() { return TransformInfoData(); }

    public: static TransformInfoData getInstance();

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

    public: const std::string OWNER = "OWNER_" +this->NAME;

    public: const std::string PARTIAL = "PARTIAL_" +this->NAME;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_H
