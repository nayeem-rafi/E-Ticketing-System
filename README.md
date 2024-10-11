# Bus Ticket Booking System

## Introduction
The Bus Ticket Booking System is a console-based application designed to streamline the process of reserving seats for bus journeys. It provides users with an efficient platform for booking tickets while offering administrative functionalities for authorities to manage the operations seamlessly. This project is developed in C, utilizing file handling for persistent data storage.

## Project Description
This system allows users to log in and access a variety of features aimed at enhancing their ticket booking experience. Users can easily view available seats, book tickets by entering their personal information, and cancel bookings when necessary. The application is built with a focus on usability, ensuring a smooth user journey from ticket selection to payment. Additionally, the administrative interface allows authorities to monitor and manage all bookings, making it a comprehensive solution for bus ticket management.

## Objectives
- To create an efficient and user-friendly bus ticket booking system.
- To implement a secure login and booking management interface.
- To provide an administrative module for monitoring and managing bookings.

## Features

### Log In Interface
The system includes a secure login interface that requires users to enter their credentials. This ensures that both passengers and authorities have protected access to the system. The login process enhances security and allows for a personalized experience, as users can manage their bookings easily after authentication.

### Book Ticket
The ticket booking feature is central to the system. After logging in, users can view available seats for specific bus routes. They can select their desired seats, input their name and phone number, and confirm their booking. This process is straightforward and user-friendly, designed to minimize confusion and expedite ticket purchasing.

### Seat View
Users can view the available seats on their chosen bus route before making a booking. This feature displays the current status of each seat, allowing users to make informed decisions about their selections. The visual representation of available and booked seats aids in clarity and enhances the user experience.

### Online Payment
The application simulates an online payment process where users can "pay" for their booked seats. A prompt for payment through a fictional payment gateway is included, showcasing how users would enter their payment confirmation code. This feature emphasizes the convenience of online transactions and adds realism to the booking process.

### Cancel Ticket
Users have the flexibility to cancel their bookings through the cancellation feature. By entering their name and phone number, they can retrieve their booking information and initiate cancellation. This feature is vital for accommodating changing travel plans and ensuring customer satisfaction.

### Favorable to Users and Authority
The application is designed to cater to the needs of both users and authorities. Users enjoy an intuitive interface that simplifies the booking process, while authorities benefit from a comprehensive view of all bookings. This dual functionality makes the system advantageous for everyone involved.

### Authority Check-In Advantage
Authorities have the capability to access a dedicated interface where they can review all booking data. By entering a secure passcode, administrators can view passenger information, including names, phone numbers, and seat allocations. This feature ensures that authorities can effectively monitor operations and manage bookings.

## Applications
The Bus Ticket Booking System has several practical applications, including:
- **Public Transport Companies**: Bus companies can use this system to manage their ticket sales and seat reservations efficiently.
- **Travel Agencies**: Agencies can streamline their booking processes and offer a user-friendly interface for customers.
- **Event Transportation**: The system can be adapted for special event transportation, allowing organizers to manage group bookings seamlessly.
- **Educational Institutions**: Schools and universities can use this application to arrange travel for student excursions or field trips.

## How to Use/Run
1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Compile the C files using a C compiler (e.g., `gcc`).
4. Run the executable to start the application.
5. Follow the on-screen instructions to log in or book tickets.

## File Creation
The application creates and utilizes several text files for data storage, including:
- `data.txt`: Stores user booking information.
- `b1.txt`, `b2.txt`, ..., `b12.txt`: Store seat availability and booking data for different bus routes.

## Conclusion
The Bus Ticket Booking System project not only demonstrates essential programming skills but also provides practical insights into system design and user interface considerations. It serves as a foundational project for those interested in further exploring software development in C. The application addresses real-world needs in the transportation industry, highlighting its relevance and potential impact.
