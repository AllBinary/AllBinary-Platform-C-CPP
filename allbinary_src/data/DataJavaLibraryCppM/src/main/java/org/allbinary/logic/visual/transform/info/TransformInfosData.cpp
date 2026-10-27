
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfosData
            : public Object
         {

    private: static TransformInfosData* instance() { static std::unique_ptr<TransformInfosData> value(new TransformInfosData()); return value.get(); }

    public: static TransformInfosData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfosData::instance();
    
}


private: TransformInfosData(){
}


    public: const std::string NAME = "TRANSFORM_INFOS_NAME";

    public: const std::string GROUP = "TRANSFORM_INFOS_GROUP";

    public: const std::string ALL = "TRANSFORM_INFOS_ALL";

    public: const std::string PREVIEW = "TRANSFORM_INFOS_PREVIEW";

    public: const std::string SMALL_PREVIEW = "TRANSFORM_INFOS_SMALL_PREVIEW";

};

            

