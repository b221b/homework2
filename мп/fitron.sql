-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Фев 20 2024 г., 18:39
-- Версия сервера: 8.0.30
-- Версия PHP: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `fitron`
--

-- --------------------------------------------------------

--
-- Структура таблицы `Abonements`
--

CREATE TABLE `Abonements` (
  `ID` int NOT NULL,
  `Tip_abonementa` varchar(50) DEFAULT NULL,
  `Start` date DEFAULT NULL,
  `End` date DEFAULT NULL,
  `Coast` varchar(255) DEFAULT NULL,
  `Описание` text
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Структура таблицы `Admins`
--

CREATE TABLE `Admins` (
  `ID` int NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Surname` varchar(50) DEFAULT NULL,
  `Phone_number` varchar(20) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Структура таблицы `Coaches`
--

CREATE TABLE `Coaches` (
  `ID` int NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Surname` varchar(50) DEFAULT NULL,
  `Specialization` varchar(50) DEFAULT NULL,
  `Phone_number` varchar(20) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL,
  `Stazh_raboty` int DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Структура таблицы `Review`
--

CREATE TABLE `Review` (
  `ID` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Структура таблицы `Trenirovki`
--

CREATE TABLE `Trenirovki` (
  `ID` int NOT NULL,
  `Name` varchar(100) DEFAULT NULL,
  `Duration_min` int DEFAULT NULL,
  `Day` varchar(20) DEFAULT NULL,
  `Start_time` time DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Структура таблицы `Users`
--

CREATE TABLE `Users` (
  `ID` int NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Surname` varchar(50) DEFAULT NULL,
  `Gender` varchar(10) DEFAULT NULL,
  `Phone_number` varchar(20) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL,
  `Dirthday` date DEFAULT NULL,
  `Registration` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Индексы сохранённых таблиц
--

--
-- Индексы таблицы `Abonements`
--
ALTER TABLE `Abonements`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `Admins`
--
ALTER TABLE `Admins`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `Coaches`
--
ALTER TABLE `Coaches`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `Review`
--
ALTER TABLE `Review`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `Trenirovki`
--
ALTER TABLE `Trenirovki`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `Users`
--
ALTER TABLE `Users`
  ADD PRIMARY KEY (`ID`);

--
-- Ограничения внешнего ключа сохраненных таблиц
--

--
-- Ограничения внешнего ключа таблицы `Abonements`
--
ALTER TABLE `Abonements`
  ADD CONSTRAINT `fk_Посетители_ID` FOREIGN KEY (`ID`) REFERENCES `Users` (`ID`);

--
-- Ограничения внешнего ключа таблицы `Coaches`
--
ALTER TABLE `Coaches`
  ADD CONSTRAINT `fk_тренеры_ID` FOREIGN KEY (`ID`) REFERENCES `Users` (`ID`);

--
-- Ограничения внешнего ключа таблицы `Review`
--
ALTER TABLE `Review`
  ADD CONSTRAINT `review_ibfk_1` FOREIGN KEY (`ID`) REFERENCES `Users` (`ID`);

--
-- Ограничения внешнего ключа таблицы `Trenirovki`
--
ALTER TABLE `Trenirovki`
  ADD CONSTRAINT `fk_Тренировки_ID` FOREIGN KEY (`ID`) REFERENCES `coaches` (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
