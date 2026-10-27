
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

class NewUserFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new User();
    
}


                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(TransformInfoInterface* transformInfoInterface){

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(transformInfoInterface);;
    

    HttpServletRequest* httpServletRequest = dynamic_cast<HttpServletRequest*>(httpTransformInfoInterface->getPageContext()->getRequest());;
    

    HashMap<Object*, Object*>* hashMap = (new RequestParams(httpServletRequest))->toHashMap();;
    

    std::string role = httpTransformInfoInterface->getPropertiesHashMap()->get(UserRoleData::NAME.toString());;
    
hashMap->put(UserRoleData::NAME.toString(), role);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreateUserFactory::getInstance(hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(HttpServletRequest* httpServletRequest, HashMap<Object*, Object*>* propertiesHashMap){

                        if(propertiesHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    HashMap<Object*, Object*>* requestHashMap = (new RequestParams(httpServletRequest))->toHashMap();;
    

    std::string roleString = propertiesHashMap->get(UserRoleData::NAME.toString());;
    
requestHashMap->put(UserRoleData::NAME.toString(), roleString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreateUserFactory::getInstance(requestHashMap);;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Null HashMap");
                    

                        }
                            
}


private: NewUserFactory(){
}


};

            

