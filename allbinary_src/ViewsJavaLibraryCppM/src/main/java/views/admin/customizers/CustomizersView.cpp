
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <java/util/Arrays.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/sort/StringComparator.h>

      
#include <org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizerData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizersData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomizersView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: BasicArrayList customizersVector;

public: CustomizersView(TransformInfoInterface transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->customizersVector= TransformInfoEntityBuilder::getInstance().getNames(this->getWeblisketSession().getStoreName());
    
}


    public: Node toXmlNode(Document document){

        try {
            
    Node node = document.createElement(TransformTemplateCustomizersData::NAME);;
    

    BasicArrayList unsortedCustomizerViewVector = BasicArrayListD();;
    

    int32_t size = this->customizersVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string viewName = this->customizersVector.get(index);;
    

                        if(viewName.indexOf(CustomizerTransformInfoData::NAME) > 0 && viewName.indexOf(GLOBALS2::EDIT) > 0 && viewName.indexOf(BodyData::getInstance().VIEWNAMEKEY) > 0 && viewName.indexOf(TitleData::getInstance().VIEWNAMEKEY) > 0)
                        
                                    {
                                    unsortedCustomizerViewVector.add(viewName);
    

                                    }
                                
}


    std::vector<Object*> objectArray = unsortedCustomizerViewVector.toArray() as any[];;
    
Arrays::sort(objectArray, StringComparator());
    




                        for (
    int32_t index = 0;index < objectArray.size(); index++)
        {

    std::string viewName = objectArray[index];;
    

    Node viewNameNode = ModDomHelper::createNameValueNodes(document, TransformTemplateCustomizerData::NAME, viewName, TransformTemplateCustomizerUtil::getInstance().getPageNameHack(viewName, this->getWeblisketSession().getStoreName()));;
    
node.appendChild(viewNameNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

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

            

