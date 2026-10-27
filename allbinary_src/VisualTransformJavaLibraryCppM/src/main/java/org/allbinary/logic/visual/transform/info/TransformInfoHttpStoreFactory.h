
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

class TransformInfoHttpStoreFactory
            : public Object
        , public TransformInfoFactoryInterface {

    private: static TransformInfoHttpStoreFactory* instance() { static std::unique_ptr<TransformInfoHttpStoreFactory> value(new TransformInfoHttpStoreFactory()); return value.get(); }

    public: static TransformInfoHttpStoreFactory* getInstance();

private: TransformInfoHttpStoreFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getInstance(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H
