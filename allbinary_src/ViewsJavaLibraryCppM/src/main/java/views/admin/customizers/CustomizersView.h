
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Arrays.h>
class BasicArrayList;
class BasicArrayListD;
class TransformInfoEntityBuilder;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class GLOBALS2;

class LogUtil;
class StringComparator;
class CustomizerTransformInfoData;
class TransformInfoInterface;
class TransformTemplateCustomizerData;
class TransformTemplateCustomizersData;
class BodyData;
class TitleData;
class TransformTemplateCustomizerUtil;
class CommonStrings;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomizersView: public HttpStoreComponentView, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: BasicArrayList* customizersVector;

public: CustomizersView(TransformInfoInterface* transformInfoInterface);

    public: Node* toXmlNode(Document* document);

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_CUSTOMIZERS_CUSTOMIZERSVIEW_H_COMPLETE
        #if __has_include(<java/util/Arrays.h>)
#include <java/util/Arrays.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/sort/StringComparator.h>)
#include <org/allbinary/logic/control/sort/StringComparator.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizerData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizerData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizersData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizersData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>)
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
