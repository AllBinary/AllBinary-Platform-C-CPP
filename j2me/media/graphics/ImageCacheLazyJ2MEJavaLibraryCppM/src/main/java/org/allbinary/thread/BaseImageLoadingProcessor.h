
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_BASEIMAGELOADINGPROCESSOR_H
        #define ORG_ALLBINARY_THREAD_BASEIMAGELOADINGPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BaseImageLoadingProcessor
            : public Object
         {

    private: static BaseImageLoadingProcessor* instance() { static std::unique_ptr<BaseImageLoadingProcessor> value(new BaseImageLoadingProcessor()); return value.get(); }

    public: static BaseImageLoadingProcessor* getInstance();

    public: void runTask();

};

            


        #endif //ORG_ALLBINARY_THREAD_BASEIMAGELOADINGPROCESSOR_H
