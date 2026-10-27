
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICCONFIGDATA_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICCONFIGDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericConfigData
            : public Object
         {

    public: static inline std::string RELATIVE_PATH = "./";

    public: static inline std::string CONFIG_PATH = "modules/configs/";

    public: static inline std::string MODULE_RELATIVE_PATH = GenericConfigData::RELATIVE_PATH +GenericConfigData::CONFIG_PATH +"allbinary/input/automation/module/";

    public: static inline std::string GAME_MODULE_RELATIVE_PATH = GenericConfigData::MODULE_RELATIVE_PATH +"game/";

    public: static inline std::string MMO_GAME_MODULE_RELATIVE_PATH = GenericConfigData::GAME_MODULE_RELATIVE_PATH +"mmog/";

    public: static inline std::string FREE_MMO_GAME_MODULE_RELATIVE_PATH = "free/";

private: GenericConfigData();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICCONFIGDATA_H
