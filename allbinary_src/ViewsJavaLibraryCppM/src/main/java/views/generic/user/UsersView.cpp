
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
        



        #ifndef VIEWS_GENERIC_USER_USERSVIEW_CPP
        #define VIEWS_GENERIC_USER_USERSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/user/UsersView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/UserDomNode.h>

      
#include <org/allbinary/business/user/UsersData.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UsersView::UsersView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto UsersView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* usersNode = document->createElement(UsersData::NAME);;
    

    int32_t size = this->userVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    User* userInterface = dynamic_cast<User*>(this->userVector->get(index));;
    

                        if(userInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    Node* node = (new UserDomNode(userInterface))->toXmlNode(document);;
    
usersNode->appendChild(node);
    

                                    }
                                
                        else {
                            this->logUtil->putF("UserHelper", this, "toXmlNode");
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return usersNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto UsersView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto UsersView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_GENERIC_USER_USERSVIEW_CPP
