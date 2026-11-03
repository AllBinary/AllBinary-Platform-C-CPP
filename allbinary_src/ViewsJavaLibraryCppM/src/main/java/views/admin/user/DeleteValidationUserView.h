
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
        



        #ifndef VIEWS_ADMIN_USER_DELETEVALIDATIONUSERVIEW_H
        #define VIEWS_ADMIN_USER_DELETEVALIDATIONUSERVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class UserName;
class UserEntityFactory;
class RequestParams;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/user/UserView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DeleteValidationUserView: public UserView, public virtual ValidationComponentInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string userName;

public: DeleteValidationUserView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //VIEWS_ADMIN_USER_DELETEVALIDATIONUSERVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_USER_DELETEVALIDATIONUSERVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_USER_DELETEVALIDATIONUSERVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/user/username/UserName.h>)
#include <org/allbinary/business/user/username/UserName.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("views/admin/user/UserView.h")
#include "views/admin/user/UserView.h"
#endif

        #endif
    
