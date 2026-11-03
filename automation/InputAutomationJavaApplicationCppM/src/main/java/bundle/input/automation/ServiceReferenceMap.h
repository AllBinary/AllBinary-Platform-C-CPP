
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H
        #define BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
class ServiceReference;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ServiceReferenceMap
            : public virtual Object
        , public virtual Map {

    public: static std::string toString(Map* map);

    private: ServiceReference* serviceReference;

public: ServiceReferenceMap(ServiceReference* serviceReference);

    public: int32_t size();

    public: bool isEmpty();

    public: bool containsKey(Object* key);
    public: bool containsKey(const std::string& key) { return containsKey(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool containsKey(BoxValue key) { return containsKey(JavaBoxes::toObject(key)); }

    public: bool containsValue(Object* value);
    public: bool containsValue(const std::string& value) { return containsValue(JavaString::box(value)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool containsValue(BoxValue value) { return containsValue(JavaBoxes::toObject(value)); }

    public: Object* get(Object* key);
    public: Object* get(const std::string& key) { return get(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* get(BoxValue key) { return get(JavaBoxes::toObject(key)); }

    public: Object* put(Object* key, Object* value);

    public: Object* remove(Object* key);
    public: Object* remove(const std::string& key) { return remove(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* remove(BoxValue key) { return remove(JavaBoxes::toObject(key)); }

    public: void putAll(Map* m);

    public: void clear();

    public: Set* keySet();

    public: Collection<Object*>* values();

    public: Set* entrySet();

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H_COMPLETE
        #if __has_include(<java/util/Collection.h>)
#include <java/util/Collection.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/osgi/framework/ServiceReference.h>)
#include <org/osgi/framework/ServiceReference.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
