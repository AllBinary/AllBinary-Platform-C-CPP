
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
        



        #ifndef VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_CPP
        #define VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/customizers/CustomizersView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        

CustomizersView::CustomizersView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->customizersVector= TransformInfoEntityBuilder::getInstance()->getNames(this->getWeblisketSession()->getStoreName());
    
}


    auto CustomizersView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* node = document->createElement(TransformTemplateCustomizersData::NAME);;
    

    BasicArrayList* unsortedCustomizerViewVector = new BasicArrayListD();;
    

    int32_t size = this->customizersVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string viewName = JavaBoxes::unbox<std::string>(this->customizersVector->get(index));;
    

                        if(JavaString::indexOf(viewName, CustomizerTransformInfoData::NAME) > 0 && JavaString::indexOf(viewName, GLOBALS2::EDIT) > 0 && JavaString::indexOf(viewName, BodyData::getInstance()->VIEWNAMEKEY) > 0 && JavaString::indexOf(viewName, TitleData::getInstance()->VIEWNAMEKEY) > 0)
                        
                                    {
                                    unsortedCustomizerViewVector->add(viewName);
    

                                    }
                                
}


    std::vector<Object*> objectArray = JavaBoxes::unbox<std::vector<Object*>>(unsortedCustomizerViewVector->toArray());;
    
Arrays::sort(objectArray, new StringComparator());
    




                        for (
    int32_t index = 0;index < objectArray.size(); index++)
        {

    std::string viewName = JavaBoxes::unbox<std::string>(objectArray[index]);;
    

    Node* viewNameNode = ModDomHelper::createNameValueNodes(document, TransformTemplateCustomizerData::NAME, viewName, TransformTemplateCustomizerUtil::getInstance()->getPageNameHack(viewName, this->getWeblisketSession()->getStoreName()));;
    
node->appendChild(viewNameNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto CustomizersView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizersView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_CPP
