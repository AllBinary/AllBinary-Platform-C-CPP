
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UsersView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: BasicArrayList userVector;

public: UsersView(TransformInfoInterface transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Node toXmlNode(Document document){

        try {
            
    Node usersNode = document.createElement(UsersData::NAME);;
    

    int32_t size = this->userVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    User userInterface = this->userVector.get(index);;
    

                        if(userInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    Node node = UserDomNode(userInterface).toXmlNode(document);;
    
usersNode.appendChild(node);
    

                                    }
                                
                        else {
                            this->logUtil.putF("UserHelper", this, "toXmlNode");
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

