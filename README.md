1)заходим на сайт https://opencv.org/releases/ и устанавливаем последнюю версию OpenCV

2)Создаем пустой проект с++ в visual studio

3)подключаем OpenCV к нашему проекту:

    открываем свойства проекта в visual studio;

    находим раздел С/С++;

    заходим в общие и в "дополнительные каталоги" указываем ссылку на include;

    заходим в раздел "компоновщик" и находим там общие;

    в "дополнительные каталоги библиотек" указываем ссылку на vc15\lib;

    добавляем в разделе "компоновщик" в "ввод" ("доп. зависимости") ссылки на два файла: opencv_world453.lib и opencv_world453d.lib;

4)Пишем нужный нам код и смотрим на результат

  
  
