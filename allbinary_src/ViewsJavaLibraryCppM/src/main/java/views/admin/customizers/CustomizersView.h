
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
        



        #ifndef VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H
        #define VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H

            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/Arrays.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
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

    protected: Vector customizersVector;

public: CustomizersView(TransformInfoInterface transformInfoInterface);

    public: Node toXmlNode(Document document);

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H
