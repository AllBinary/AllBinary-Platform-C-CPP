
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/NewUserFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/CreateUserFactory.h"


NewUserFactory::NewUserFactory(){
}


                //@Throws(Exception.constructor)
            
    auto NewUserFactory::getInstance() -> UserInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new User();
    
}


                //@Throws(Exception.constructor)
            
    auto NewUserFactory::getInstance(TransformInfoInterface* transformInfoInterface) -> UserInterface*{

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(transformInfoInterface);;
    

    HttpServletRequest* httpServletRequest = dynamic_cast<HttpServletRequest*>(httpTransformInfoInterface->getPageContext()->getRequest());;
    

    HashMap<Object*, Object*>* hashMap = (new RequestParams(httpServletRequest))->toHashMap();;
    

    std::string role = JavaBoxes::unbox<std::string>(httpTransformInfoInterface->getPropertiesHashMap()->get(UserRoleData::NAME->toString()));;
    
hashMap->put(UserRoleData::NAME->toString(), role);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CreateUserFactory::getInstance(hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto NewUserFactory::getInstance(HttpServletRequest* httpServletRequest, HashMap<Object*, Object*>* propertiesHashMap) -> UserInterface*{

                        if(propertiesHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    HashMap<Object*, Object*>* requestHashMap = (new RequestParams(httpServletRequest))->toHashMap();;
    

    std::string roleString = JavaBoxes::unbox<std::string>(propertiesHashMap->get(UserRoleData::NAME->toString()));;
    
requestHashMap->put(UserRoleData::NAME->toString(), roleString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CreateUserFactory::getInstance(requestHashMap);;
    

                                    }
                                
                        else {
                            


                            throw Exception("Null HashMap");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_CPP
