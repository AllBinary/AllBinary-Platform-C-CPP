
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class HttpServletRequest;
class ModDomHelper;
class ToDomHelper;
class StdUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SearchData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SearchParams
            : public virtual Object
         {

    private: HashMap<Object*, Object*>* columnsAndSearchValues;

    private: std::string order;

    private: std::string sortBy;

    private: std::string listLength;

    private: std::string startPage;

    private: std::string endPage;

public: SearchParams(HttpServletRequest* request);

    public: void add(std::string column, std::string value);

    public: void setOrder(std::string value);

    public: void setSortBy(std::string value);

    public: void setLength(std::string value);

    public: void setStartPage(std::string value);

    public: void setEndPage(std::string value);

    public: HashMap<Object*, Object*>* get();

    public: std::string getOrder();

    public: std::string getSortBy();

    public: std::string getLength();

    public: int32_t getLengthInt();

    public: std::string getStartPage();

    public: std::string getEndPage();

    public: int32_t getStartPageInt();

    public: int32_t getEndPageInt();

                //@Throws(Exception.constructor)
            
    public: Node* getParamsNode(Document* document);

                //@Throws(Exception.constructor)
            
    private: Node* getFieldsNode(Document* document);

                //@Throws(Exception.constructor)
            
    private: Node* getOrderNode(Document* document);

                //@Throws(Exception.constructor)
            
    private: Node* getSortByNode(Document* document);

                //@Throws(Exception.constructor)
            
    private: Node* getLengthNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ToDomHelper.h>)
#include <org/allbinary/data/tree/dom/ToDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/control/search/SearchData.h")
#include "org/allbinary/logic/control/search/SearchData.h"
#endif

        #endif
    
