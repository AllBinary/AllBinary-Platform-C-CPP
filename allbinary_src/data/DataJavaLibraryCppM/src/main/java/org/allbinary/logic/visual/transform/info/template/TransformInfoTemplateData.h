
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TEMPLATE_TRANSFORMINFOTEMPLATEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TEMPLATE_TRANSFORMINFOTEMPLATEDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoTemplateData
            : public Object
         {

    private: static TransformInfoTemplateData instance() { return TransformInfoTemplateData(); }

    public: static TransformInfoTemplateData getInstance();

private: TransformInfoTemplateData();

    public: const std::string UNCRYPTED_EXTENSION = "xsl";

    public: const std::string ENCRYPTED_EXTENSION = "abv";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TEMPLATE_TRANSFORMINFOTEMPLATEDATA_H
