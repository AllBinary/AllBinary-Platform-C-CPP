
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H

            #include <vector>
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomScreen.h"

class ABCustomForm: public CustomScreen {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: ABCustomForm(std::string title, std::vector<ABCustomItem> items, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: std::vector<ABCustomItem> getAllitems();

    public: int32_t size();

    public: void setSelectedIndex(int32_t index);

    public: int32_t getSelectedIndex();

    public: void deleteAll();

    public: void delete_(int32_t itemNum);

    public: int32_t append(ABCustomItem item);

    public: void insert(int32_t itemNum, ABCustomItem item);

    public: void set(int32_t itemNum, ABCustomItem item);

    public: ABCustomItem get(int32_t itemNum);

    public: int32_t getWidth();

    public: void paint(Graphics graphics);

    public: std::string getTitle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
