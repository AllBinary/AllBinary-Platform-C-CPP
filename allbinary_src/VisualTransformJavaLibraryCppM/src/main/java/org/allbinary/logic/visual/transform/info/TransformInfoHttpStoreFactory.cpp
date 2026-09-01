
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoFactoryInterface.h"
#include "TransformInfoHttpStore.h"
#include "TransformInfoInterface.h"

class TransformInfoHttpStoreFactory
            : public Object
        : public TransformInfoFactoryInterface {

    private: static TransformInfoHttpStoreFactory instance() { return TransformInfoHttpStoreFactory(); }

    public: static TransformInfoHttpStoreFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoHttpStoreFactory::instance();
    
}


private: TransformInfoHttpStoreFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getInstance(HashMap<any, any> databaseHashMap, HashMap<any, any> propertiesHashMap, PageContext pageContext){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoHttpStore(databaseHashMap, propertiesHashMap, pageContext);
    
}


};

            

