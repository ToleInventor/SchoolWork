<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8" />
<meta name="viewport" content="width=device-width, initial-scale=1" />
<title>School Assignments Repository</title>
<style>
  body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    background: #f4f7f8;
    color: #333;
    margin: 0;
    padding: 0 1rem;
  }
  header {
    background: #0056b3;
    color: white;
    padding: 1.5rem 1rem;
    text-align: center;
    border-radius: 0 0 15px 15px;
  }
  header h1 {
    margin: 0;
    font-weight: 700;
    font-size: 2rem;
    display: flex;
    justify-content: center;
    align-items: center;
    gap: 10px;
  }
  header svg {
    width: 28px;
    height: 28px;
    fill: white;
  }
  header p {
    font-size: 1.1rem;
    margin-top: 0.3rem;
    font-weight: 300;
  }
  main {
    margin: 2rem auto;
    max-width: 800px;
    background: white;
    padding: 2rem;
    box-shadow: 0 8px 20px rgba(0, 0, 0, 0.1);
    border-radius: 12px;
  }
  section {
    margin-bottom: 2rem;
  }
  h2 {
    border-bottom: 3px solid #0056b3;
    padding-bottom: 0.3rem;
    color: #0056b3;
    font-weight: 700;
    display: flex;
    align-items: center;
    gap: 8px;
  }
  h2 svg {
    width: 24px;
    height: 24px;
    fill: #0056b3;
  }
  .assignments > p {
    font-style: italic;
    color: #666;
  }
  table {
    width: 100%;
    border-collapse: collapse;
    margin-top: 1rem;
  }
  th, td {
    text-align: left;
    padding: 0.75rem 1rem;
    border-bottom: 1px solid #ccc;
  }
  th {
    background-color: #e9f0fc;
    color: #0056b3;
    font-weight: 600;
  }
  a {
    color: #0056b3;
    text-decoration: none;
  }
  a:hover {
    text-decoration: underline;
  }
  footer {
    text-align: center;
    font-size: 0.9rem;
    color: #888;
    margin: 3rem 0 1rem 0;
  }
  @media (max-width: 600px) {
    main {
      padding: 1rem;
    }
    th, td {
      padding: 0.5rem;
    }
  }
</style>
</head>
<body>
<header>
  <h1>
    <!-- Custom graduation cap SVG icon -->
    <svg aria-hidden="true" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg">
      <path d="M2 24l30 14 30-14-30-14zM16 34v14l-14-7zM48 34v14l14-7zM16 48v6h32v-6z"/>
    </svg>
    School Assignments Repository
  </h1>
  <p>Assignments submitted for assessment by my lecturer</p>
</header>

<main>
  <section class="assignments">
    <h2>
      <!-- Custom open book SVG icon -->
      <svg aria-hidden="true" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg">
        <path d="M52 14v36l-20-10-20 10V14l20 10z"/>
      </svg>
      Assignments Overview
    </h2>
    <p>Here you will find all my completed assignments, with relevant code, reports, and documentation. Feel free to explore the folders to view individual assignments.</p>
  </section>

  <section class="contacts">
    <h2>
      <!-- Custom phone handset SVG icon -->
      <svg aria-hidden="true" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg">
        <path d="M48 40c-6 6-11 6-19 0-8-6-8-13-3-19l4-4 7 7-5 5 3 3 5-5 7 7z"/>
      </svg>
      Contact Me
    </h2>
    <table>
      <tr>
        <th>Contact Method</th>
        <th>Details</th>
      </tr>
      <tr>
        <td>
          <!-- Small handset icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <path d="M15 14c-3-3-5-5-8-8l3-3h2l5 5v1l-2 2z"/>
          </svg>
          WhatsApp / Calls
        </td>
        <td><a href="tel:+254742174250">+254 742 174 250</a></td>
      </tr>
      <tr>
        <td>
          <!-- Envelope icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <path d="M2 4h20v16H2zM22 6l-10 7L2 6"/>
          </svg>
          Email
        </td>
        <td><a href="mailto:tolecaxtone2@gmail.com">tolecaxtone2@gmail.com</a></td>
      </tr>
      <tr>
        <td>
          <!-- YouTube play button icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <path d="M10 8l6 4-6 4z"/>
          </svg>
          YouTube
        </td>
        <td><a href="https://www.youtube.com/@CaxtoneTechKenya" target="_blank" rel="noopener">@CaxtoneTechKenya</a></td>
      </tr>
      <tr>
        <td>
          <!-- TikTok musical note icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <path d="M12 2v14a4 4 0 114-4h-4z"/>
          </svg>
          TikTok
        </td>
        <td><a href="https://www.tiktok.com/@CaxtoneTechKenya" target="_blank" rel="noopener">@CaxtoneTechKenya</a></td>
      </tr>
      <tr>
        <td>
          <!-- Instagram camera icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <circle cx="12" cy="12" r="3"/>
            <path d="M4 7v10a5 5 0 005 5h6a5 5 0 005-5V7z"/>
            <circle cx="17.5" cy="6.5" r="1.5"/>
          </svg>
          Instagram
        </td>
        <td><a href="https://www.instagram.com/CaxtoneTechKenya" target="_blank" rel="noopener">@CaxtoneTechKenya</a></td>
      </tr>
      <tr>
        <td>
          <!-- Facebook "f" icon -->
          <svg aria-hidden="true" viewBox="0 0 24 24" style="vertical-align:middle; width:16px; height:16px; fill:#0056b3;" xmlns="http://www.w3.org/2000/svg">
            <path d="M9 8H7v4H5v3h2v5h3v-5h2l1-3h-3V9c0-.6.2-1 1-1h2V5h-3c-2 0-3 1-3 3v2z"/>
          </svg>
          Facebook
        </td>
        <td><a href="https://www.facebook.com/CaxtoneTechKenya" target="_blank" rel="noopener">@CaxtoneTechKenya</a></td>
      </tr>
    </table>
  </section>
</main>

<footer>
  Thank you for visiting my assignments repository! Feel free to reach out anytime.
</footer>
</body>
</html>
