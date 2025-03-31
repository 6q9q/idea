#include <iostream>
#include <vector>
#include <ctime>

std::string generateIdea() {
    std::vector<std::string> ideas = {
        // Python проекты - можно добавить свои
        "Разработать AI-помощника для Telegram с OpenAI API",
        "Создать Web API для управления файлами в облаке (Flask/FastAPI)",
        "Написать кибербезопасный Web-сканер уязвимостей (XSS, SQLi)",
        "Программа-анализатор логов и ошибок с AI (Python + NLP)",
        "Автоматизация UI: авто-кликер с OpenCV и PyAutoGUI",

        // C++ проекты - можно добавить свои
        "Разработка минималистичного HTTP-сервера на C++ и Boost.Asio",
        "Создание античит-системы для игр (C++ + Windows API)",
        "Оптимизированный обработчик изображений с OpenCV и CUDA",
        "Мультиплеерная игра с сетевым кодом (C++ + SFML)",
        "Система шифрования сообщений на основе AES (C++ + OpenSSL)",

        // Lua проекты - можно добавить свои
        "Создать Lua-бота для Discord на основе Discordia",
        "Скрипт для автоматизации в Roblox с использованием ImGui",
        "Написать расширение для FiveM (GTA 5 RP) на Lua + C++",
        "Создать AI-дополнение для NPC в Roblox (Lua + ChatGPT API)",
        "Разработка плагина для Neovim, добавляющего новые команды"
    };

    int randomIndex = rand() % ideas.size();
    return ideas[randomIndex];
}

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    std::cout << "Случайная идея для кода: " << generateIdea() << std::endl;
    return 0;
}
