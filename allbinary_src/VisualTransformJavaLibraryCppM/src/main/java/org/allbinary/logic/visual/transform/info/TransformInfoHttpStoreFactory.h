
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
        

    private: static const instance: TransformInfoHttpStoreFactory = new TransformInfoHttpStoreFactory();

    public static TransformInfoHttpStoreFactory getInstance();

private constructor ();

                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getInstance(HashMap<any, any> databaseHashMap, HashMap<any, any> propertiesHashMap, PageContext pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H
