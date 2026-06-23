# ATM-Simulator-Dynamic-Multi-User-Template-System-

# ATM Simulator (Dynamic Multi-User Template System)

A C++ console application that simulates an Automated Teller Machine (ATM) using structures, multi-function architecture, and precise memory scope management.

## 💡 Concept & Architecture
Unlike traditional banking systems that connect to persistent databases, this project is engineered as a **Dynamic Public ATM Simulator**. It uses a local template architecture perfect for public kiosk environments:
* **Session-Based State:** Each user session is fresh. When a user logs in, they get a fresh instance of the account structure initialized with standard default configurations (Balance: $1000, PIN: 1234).
* **Automatic Reset (Zero-Trust Model):** Once the user selects "Exit", the session context is entirely destroyed from the memory stack, automatically resetting the ATM to welcome the next customer with zero data leakage.

## 🛠️ Technical Features
* **Modular Codebase:** Organized into dedicated functions (`wle`, `enter_password`, `to_choose`, `new_pass`) to separate responsibilities.
* **Security Lock Mechanism:** Includes a countdown security block that triggers after 3 consecutive invalid inputs.
* **Data Protection:** Implements password confirmation logic before any critical state changes.

























🏦 محاكي جهاز الصراف الآلي (ATM Simulator)تطبيق كونسول (Console Application) مكتوب بلغة C++ يحاكي آلية عمل جهاز الصراف الآلي العام. يعتمد البرنامج على بنية الدالات المتعددة (Multi-Function Architecture) والـ Structures لإدارة وتنظيم بيانات المستخدمين بشكل مرن داخل الذاكرة.💡 فكرة النظام والمنطق البرمجي (Concept)تم تصميم هذا المشروع ليعمل بنظام "القوالب التلقائية الإعادة" (Dynamic Template System)، وهو نظام مثالي لأجهزة الخدمة العامة التي لا تتصل بقواعد بيانات دائمة، حيث يعتمد على الآتي:جلسة مستخدم مؤقتة (Session-Based): عند بدء تشغيل البرنامج، يتم بناء نسخة جديدة من الحساب بالقيم الافتراضية (الرصيد: $1000$، كلمة المرور: $1234$).إعادة الضبط التلقائي (Zero-Trust Model): بمجرد أن يضغط المستخدم على خيار الخروج (Exit 4)، يتم تدمير الجلسة الحالية ومسح بياناتها تماماً من ذاكرة الرام (RAM Stack). هذا يضمن حماية بيانات الزبون المغادر، ويقوم الصراف بتهيئة نفسه تلقائياً لاستقبال زبون جديد ببيانات افتراضية نظيفة.🛠️ المميزات التقنية للكود (Technical Features)كود برمي منظم (Modular Code): تم تقسيم البرنامج إلى دالات مستقلة ومتخصصة لسهولة القراءة والتعديل (wle, enter_password, to_choose, new_pass).نظام الحظر الأمني (Security Lock Countdown): يحتوي الكود على نظام حماية ذكي باستخدام مكتبة <windows.h> ودالة Sleep. إذا قام المستخدم بإدخال خيارات أو كلمات مرور خاطئة لـ 3 مرات متتالية، يتم قفل الصراف الآلي تلقائياً ويبدأ عداد تنازلي بالوقت لمنع محاولات الاختراق العشوائي.تأكيد العمليات الحساسة: يطلب النظام تأكيداً من المستخدم (y/n) قبل إتمام عمليات السحب أو الإيداع لضمان سلامة التعاملات.🔍 التتبع البرمجي خلف الكواليس (Code Trace)الهياكل (Structures): تم دمج بيانات الحساب (الرصيد، كلمة السر، العمليات) داخل الـ Struct لتسهيل استدعائها ككتلة واحدة.إدارة الذاكرة (Local Scope): يتم بناء متغيرات الحساب كمتغيرات محلية (Local Variables) داخل الدالة، مما يجعل عمر المتغير (Lifetime) ينتهي فور الخروج من الدالة، وهو السر وراء نجاح عملية الـ Auto-Reset للزبائن الجدد.
